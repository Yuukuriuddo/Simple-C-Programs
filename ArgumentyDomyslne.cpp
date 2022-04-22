#include <iostream>

//Napisz jedną funkcję (nie dwie ani trzy!),
//która to będzie mogła przyjmować 1, 2 albo 3 argumenty typu całkowitego i zwracać
//ich wynik mnożenia. Podpowiedź: Zapoznaj się z Argumentami domyślnymi

using namespace std;

int Mnozenie(int a, int b = 1, int c = 1)
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