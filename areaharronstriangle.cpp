/*Find the area of any triangle using Heron's Formula :
----------------------------------------------------------
Input the length of 1st side of the triangle : 5
Input the length of 2nd side of the triangle : 5
Input the length of 3rd side of the triangle : 5
The area of the triangle is : 10.8253 */
#include <iostream>
#include <math.h>

using namespace std;
int main ()
{
    float a,b,c;
    float area;
    float s;
    cout << "Input the length of first side of the trinagle :" << endl;
    cin >> a;
    cout << "Input the length of second side of the triangle :" << endl;
    cin >> b;
    cout << "Input the third side of the triangle :" << endl;
    cin >> c;
     s = (a+b+c)/2; 
     area = sqrt (s*(s-a)*(s-b)*(s-c));
     cout << "The area of the triangle is " << area << endl;
     return 0;

}