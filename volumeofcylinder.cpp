/*Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 6
Input the height of the cylinder : 8
The volume of a cylinder is : 904.32 */
#include <iostream>
using namespace std;
int main ()
{
    float radius,volume,height;

    cout << "Enter the radius of cylinder" << endl;
    cin >> radius;
    cout << "Enter the height of cylinder" << endl;
    cin >> height;
    volume = 3.14*radius*radius*height;
    cout << "The volume of cylinder is " << volume << endl;
    return 0;



}