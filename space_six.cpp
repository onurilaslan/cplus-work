#include <iostream>
#include <vector>
#include <string>

using namespace std;

void kelvin_fahrenheit(short input) {
    short f = ((input * 9) / 5) + 32;
    short k = input + 273;
    cout << "Fahrenhayt="<<f<<" "<<"Kelvin="<<k;
};

int main()
{
    short input = 8;

    kelvin_fahrenheit(input);

    return 0;
}