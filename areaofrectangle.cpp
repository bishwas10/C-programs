#include <iostream>
using namespace std;
int main ()
{
    float length,breadth,area,perimeter;
    cout << "Enter the lenght of rectangle" << endl;
    cin >> length;
    cout << "Enter the breadth of rectangle" << endl;
    cin >> breadth;
    area = length * breadth;
    perimeter = 2*(length +breadth);
    cout << "The area of the rectangle is :" << area << endl;
    cout << "The perimeter of the rectangle is :" << perimeter<< endl;
    
    return 0;
}