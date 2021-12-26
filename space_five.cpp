#include <iostream>
#include <vector>
#include <string>

using namespace std;

void ctw(short input) {
    string ones[10] = {"Sifir", "Bir", "Iki", "Uc", "Dort", "Bes", "Alti", "Yedi", "Sekiz", "Dokuz"};
    string tens[10] = {"On", "Yirmi", "Otuz", "Kirk", "Elli", "Atmis", "Yetmis", "Seksen", "Doksan", "Yuz"};

    if(input < 10) {
        cout << ones[input];
        return;
    }

    if(input % 10 == 0) {
        cout << tens[input / 10] << endl;
    } else {
        cout << tens[input / 10 + - 1] << " " << ones[input % 10] << endl;
    }

};

int main()
{
    short input = 8;

    ctw(input);

    return 0;
}