/*Calculate Area of Circle */
#include <iostream>
using namespace std;
int main ()
{
    int radius;
    float area,perimeter;
    cout << "Enter the radius of Circle: " << endl;
    cin >> radius;
    area = 3.14 *radius*radius;
    perimeter = 2*3.14*radius;
    cout << "The area of circle is :" << area << endl;
    cout << "The perimeter of circle is :" << perimeter << endl;
    
    return 0;
}