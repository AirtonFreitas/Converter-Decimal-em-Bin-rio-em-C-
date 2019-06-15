#include <iostream>
#include <stack>
using namespace std;


int main() {
	
	stack <int> i;
	
	int decimal, resto;
	cout << "Digite o Numero Decimal:" << "\n";
	cin >> decimal;
	
	
	for (; decimal > 0; decimal = decimal / 2)
	{
	resto = decimal % 2;
	i.push(resto);
	}
	for( ; !i.empty() ; i.pop())
	{
	cout << i.top();
	}
}
