#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    /* 
    OXOXOX
    XOXOXO
    OXOXOX
    XOXOXO
    */
    int i,j;
    for(i = 1; i< 5; i++) {
        for(j = 0; j<=5; j++) {
            if((i+j) % 2 == 0) {
                cout << "X";
            } else {
                cout << "O";
            }
        }
        cout << endl;
    }
    return 0;
}