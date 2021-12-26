#include <iostream>
#include <vector>
#include <string>

using namespace std;

// output => 1
int main()
{
    short A,B;

    B = 3;
    A = ++B;
    if(A == B) cout << "1";
    else cout << "0";

    return 0;
}