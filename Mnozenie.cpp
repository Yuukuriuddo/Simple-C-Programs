#include <iostream>
#include <stdio.h>
//Napisz jedn¹ funkcjê (nie dwie ani trzy!), 
//która to bêdzie mog³a przyjmowaæ 1, 2 albo 3 argumenty typu ca³kowitego i zwracaæ 
//ich wynik mno¿enia. PodpowiedŸ: Zapoznaj siê z Argumentami domyœlnymi
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
