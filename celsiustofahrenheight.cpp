 /*Convert temperature in Celsius to Fahrenheit :
---------------------------------------------------
Input the temperature in Celsius : 35
The temperature in Celsius : 35
The temperature in Fahrenheit : 95 */
#include <iostream>
using namespace std;
int main ()
{
    int celsius,fahrenheight;
    cout << "Input the temperature in Celsius" << endl;
    cin >> celsius;
    //C × 9/5) + 32 = 32°F //
    fahrenheight = ((celsius*9)/5)+32;
    cout << "The temperature in Fahrenheight: " << fahrenheight <<  endl;
    return 0;
}