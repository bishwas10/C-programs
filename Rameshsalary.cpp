/*claculate gross salary of Ramesh */
#include <iostream>
using namespace std;
int main ()
{
    int sal,allowance,houserent,grosssal;
    cout << "Enter the Salary of Ramesh" << endl;
    cin >> sal;
    cout << "Enter the allownace " << endl;
    cin >> allowance;
    cout << "Enter the houserent " << endl;
    cin >> houserent;
    
    grosssal = sal + 0.4*sal + 0.2*sal;
    cout << "his gross salary is :" <<grosssal <<endl;
    return 0;

}
