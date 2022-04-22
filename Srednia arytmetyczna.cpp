#include <iostream>
#include <stdio.h>

using namespace std;
//------------------------
int main()
{
	const int Size = 10;
	int *Tablica = new int[Size]();
	int Licznik = 0;
	double Srednia = 0;
	int ilosc;
	int N;
	
	cout << "Podaj z jakiej iloœci liczb chcesz wyliczyc srednia arytmetyczna: ";
	cin >> ilosc;
	cout << "Podaj kolejno liczby: " << endl;
	// Wypisywanie liczb 
	do
	{
		cin >> N;
		while(cin.fail())
		{
			cout << "Tylko z cyfr i liczb mozna wyliczyc srednia arytmetyczna -,-" << endl;
			cin.clear();
			cin.ignore(1000,'\n');
			
			cout << "Wprowadz liczbe ponownie: ";
			cin >> N;
		}
		Tablica[Licznik] = N;
		Licznik++;	
	}while (ilosc > Licznik);

	// liczenie sredniej arytmetycznej
	for(int i = 0; i < Licznik; i++)
		{
			Srednia = Srednia + Tablica[i];
		}
		
	Srednia = Srednia / Licznik;
	
	cout << "Srednia liczb to: " << Srednia << endl;
	
	cout << "Liczby uzyte przy liczeniu sredniej: ";
	// wypisanie liczb z tablicy
	for(int z = 0; z < ilosc; ++z)
		{
			cout << Tablica[z] << ",";
		}
	
	return 0;
}
