#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main()
{
    double h,m,deg;
    
    h = 3;
    m = 0;

    deg = (h * 30) - (m * 5.5); 

    if(deg < 0) {
      deg = (m * 5.5)-(h * 30);
    }

    if(deg > 180)
    {
      deg = 360 - deg;
    }

    cout << deg;

    return 0;
}