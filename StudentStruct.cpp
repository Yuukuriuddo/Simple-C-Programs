#include <iostream>
#include <string>
using namespace std;

struct Student {
    string Imie;
    int NrIndeksu;
};

int main()
{
    Student Krystian
            {
                "Krystian",
                55483
            };
    float cast = static_cast<float>(Krystian.NrIndeksu) / 97;
    cout << cast;

    return 0;
}
