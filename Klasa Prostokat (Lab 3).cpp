#include <iostream>

/* Utwórz klasę o nazwie Prostokat, która ma 2 publiczne pola x i y (typu int) i 1 publiczną metodę pole(),
 * zwracającą pole powierzchni (również typu int).
 * W funkcji głównej programu zadeklaruj obiekt prostokat typu Prostokat i poproś użytkownika o podanie obu wartości x i y dla pól obiektu.
 * Następnie wywołaj metodę pole() na obiekcie prostokat. Wyświetl wynik rozwiązania na ekranie.
 * Uwaga, możesz zignorować sprawdzanie parametrów wejściowych użytkownika.
*/

using namespace std;


class Prostokat {
public:
    int x;
    int y;
    int Wynik;
    void pole();
};

void Prostokat::pole(){
    Wynik = x * y;
};


int main() {
    Prostokat Prosto;
    cout << "Podaj boki prostokata: " << endl;
    cin >> Prosto.x;
    cin >> Prosto.y;

    Prosto.pole();
    cout << "Pole twojego prostokata wynosi: " << Prosto.Wynik << endl;
}
