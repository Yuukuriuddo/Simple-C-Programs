#include <iostream>

/*(1 pkt) Używając rekurencji, napisz program wyliczający silnię na podstawie liczby całkowitej wprowadzonej przez użytkownika. */


using namespace std;

unsigned long long Silnia(int a)
    {
        if (a < 2)
            return 1;

        return a*Silnia(a-1);
    }

int main()
{
    int n;
    cout << "Podaj liczbe calkowita, aby wyliczyc z niej silnie: ";
    cin >> n;
    while(cin.fail())
    {
        cout << "Mozesz podac tylko liczbe!" << endl;
        cin.clear();
        cin.ignore(1000, '\n');
        cout << "Podaj ponownie liczbe: ";
        cin >> n;
    }
    cout << "Silnia wynosi: " << Silnia(n) << endl;
    return 0;
}
