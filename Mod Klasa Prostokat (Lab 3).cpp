#include <iostream>

/* (2 pkt) Zmodyfikuj zadanie pierwsze w ten sposób, aby zmienne x i y były prywatne.
Publiczną metodę pole() zamień na publiczną zmienną int pole.
Następnie utwórz konstruktor Prostokat:Prostokat(int x, int y)który będzie wyliczał pole powierzchni
figury i przypisywał wynik do zmiennej pole.Ponownie pobierz od użytkownika oba wymiary,
które to przekażesz do konstruktora i w efekcie na koniec wyświetlisz wynik odwołując się do publicznej zmiennej pole.
*/

using namespace std;

class Prostokat {
private:
    int x;
    int y;
public:
    int pole;
    Prostokat(int x, int y);
};

Prostokat::Prostokat(int x, int y){
    pole = x * y;
}

int main() {
    int x;
    int y;
    cout << "Podaj boki prostokata: " << endl;
    cin >> x;
    cin >> y;
    Prostokat Prosto(x, y);
    cout << "Wynik to: " << Prosto.pole << endl;
}
