#include <iostream>
#include <stdio.h>

using namespace std;

void Dzielenie(int &dzielna, int dzielnik)
	{
		dzielna = 5;
	}

int main()
{
	int Wynik;
	int dzielnik;

	Dzielenie(Wynik,dzielnik = 30);
	cout << "Wynik to: " << Wynik << endl;
	
	return 0;
}

