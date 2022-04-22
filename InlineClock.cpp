#include <iostream>
#include <time.h>
#include <iomanip>

/*(2 pkt) Stwórz 2 funkcje (func1 i func2), które mają identyczną definicję (np. rekurencyjne wyliczanie silni z Zadania 1),
 * ale niech func1 będzie zadeklarowana jako inline, a func2 jako normalna (nie inline).
 * Następnie wywołaj w programie każdą z nich w pętli np. po 100 tysięcy razy.
 * Użyj funkcji clock() ze standardowej biblioteki żeby zmierzyć czasy egzekucji każdej z funkcji. Wypisz oba czasy.
 * Nie przejmuj się, że niekiedy func1 będzie szybsza, a niekiedy wolniejsza
 * (obecne kompilatory mają optymalizacje, które powodują, że funkcje inline niekoniecznie są szybsze). */

using namespace std;

inline unsigned long long func1(int a)
{
    if (a < 2)
        return 1;

    return a*func1(a-1);
}

unsigned long long func2(int a)
{
    if (a < 2)
        return 1;

    return a*func2(a-1);
}


int main() {
    int n;
    clock_t TimeReq1;
    clock_t TimeReq2;
    cout << "Podaj liczbe do wyliczenia silnii: " << endl;
    cin >> n;
    while(cin.fail())
    {
        cout << "Mozesz podac tylko liczbe!" << endl;
        cin.clear();
        cin.ignore(1000, '/n');
        cout << "Podaj ponownie liczbe: ";
        cin >> n;
    }
    TimeReq1 = clock();
    for (int i = 0; i < 100000000; i++){
        func1(n);
        //TimeReq = clock() - TimeReq;
        //cout << "Uzycie funkcji func 1 zajelo: " << (float)TimeReq/CLOCKS_PER_SEC << "seconds " << endl;
    }
    TimeReq1 = clock() - TimeReq1;
    cout << "Calkowity czas func1 zajal: " << (float)TimeReq1/CLOCKS_PER_SEC << "seconds " << endl;

    cout << "-----------------------------" << endl;

    TimeReq2 = clock();
    for (int x = 0; x < 100000000; x++) {
        func2(n);
        //TimeReq = clock() - TimeReq;
        //cout << "Uzycie funkcji func 2 zajelo: " << (float)TimeReq/CLOCKS_PER_SEC << "seconds" << endl;
    }
    TimeReq2 = clock() - TimeReq2;
    cout << "Calkowity czas func2 zajal: " << (float)TimeReq2/CLOCKS_PER_SEC << "seconds" << endl;

    cout << "Wywolania funkcji func1 i func2 zajely kolejno: " << endl << "- Funkcja 1: " << (float)TimeReq1/CLOCKS_PER_SEC << endl << "- Funkcja 2: " << (float)TimeReq2/CLOCKS_PER_SEC << endl << "Roznica miedzy czasami wynosi: " << (float)TimeReq1/TimeReq2 << " sekund.";
}
