/*Calculate Simple Interest */
#include <iostream>
using namespace std;
int main ()
{
    int p,t,r,si;
    cout << "Enter the Principal" << endl;
    cin >> p;
    cout << "Enter the time" << endl;
    cin >> t;
    cout << "Enter the rate" << endl;
    cin >> r;
    si = (int)(p*t*r)/100;
    cout << "The simple interest is :" << si << endl;

    return 0;
}


