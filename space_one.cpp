#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    short c = 0; // Toplanıcak değişken.
    string binary = "01010111"; // Girilen 2 tabanlı sayı.
    /*
        01010111
              1+2+4+16+64 => 87
    */
    reverse(binary.begin(), binary.end()); // hesaplama için gerekli çevirme işlemi.


    // 2 lik sayı sistemini 10 luk tabana çevirme.
    for(int i = 0; i < binary.length(); i++) {
        if(binary.at(i) == '1') {
            c += pow(2, i);
        }
    }

    // sonucu yazdırma
    cout << c;

    return 0;
}