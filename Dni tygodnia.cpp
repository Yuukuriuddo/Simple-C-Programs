#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
//-------------------

int main()
{
	int n;
	string Tablica[] = {"Poniedzialek","Wtorek","Sroda","Czwartek","Piatek","Sobota","Niedziela"};
	
	cout << "Podaj numer od 0 do 6: " << endl;
	cin >> n;
	
	if(n > 6)
	{
		cout << "Czego nie rozumiesz?" << endl;
		return 0;
	}else if (n < 0)
	{
		cout << "Are you seriuos ?" << endl;
		return 0;
	}else
	{
		cout << "Dzien tygodnia ktory sobie zyczysz to: " << Tablica[n] << "." << endl;
	}
	
	return 0;
}
