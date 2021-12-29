/*Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 6
The volume of a sphere is : 904.32 */
#include <iostream>
using namespace std;
int main ()
{
    float radius,volume;

    cout << "Enter the radius of sphere" << endl;
    cin >> radius;
    volume = (4*3.14*radius*radius*radius)/3;
    cout << "The volume of sphere is " << volume << endl;
    return 0;


}