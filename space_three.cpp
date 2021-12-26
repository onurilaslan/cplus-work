#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
 output => i=0i=1i=2i=3i=4i=5
*/
int main()
{

    short i = 0;

    do {
        cout << "i=" << i;
        i++;    
    } while(i < 6);

    return 0;
}