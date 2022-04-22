#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

/*
(2 pkt) Napisz program, w którym zdefiniujesz swoją własną przestrzeń nazw, a w niej zdefiniujesz funkcję o nazwie cout wyświetlającą
na ekranie konsoli dowolny tekst (więcej niż jednowyrazowy)
w kolorze czerwonym. Poproś użytkownika o podanie tego tekstu w konsoli, a następnie wypisz go z wykorzystaniem swojej
funkcji cout (w kolorze czerwonym) jak i z biblioteki standardowej cout (w kolorze domyślnym).
Podpowiedź: Pomocne może się okazać użycie funkcji std::getline() i zapoznanie się z forum, jak koloryzować standardowe wyjście.
*/
namespace Text {
    string red(string s) {
        HANDLE hConsole;
        int k = 4;
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hConsole, k);
        return s;
    }
}

int main()
{
    string text;
    cout << "Podaj dowolny text: " << endl;
    getline(cin, text);
    cout << Text::red(text) << endl;
}

/* Lista kolorow :
for (k = 1; k < 255; k++)
{
    SetConsoleTextAttribute(hConsole, k);
    cout << k << "I want to be nice today!" << endl;
}
*/