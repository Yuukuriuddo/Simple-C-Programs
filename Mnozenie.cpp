#include <iostream>
#include <stdio.h>
//Napisz jedn� funkcj� (nie dwie ani trzy!), 
//kt�ra to b�dzie mog�a przyjmowa� 1, 2 albo 3 argumenty typu ca�kowitego i zwraca� 
//ich wynik mno�enia. Podpowied�: Zapoznaj si� z Argumentami domy�lnymi
using namespace std;

int Mnozenie(int a, int b, int c)
	{
		return ( a * b * c);
	}

int main()
{
    cout << Mnozenie(5) << endl;
    cout << Mnozenie(5, 10) << endl;
    cout << Mnozenie(5, 10, 15) << endl;
	return 0;
}
