/*Marksheet of Student */
#include <iostream>
using namespace std;
int main ()
{
    int marks1,marks2,marks3,marks4,marks5;
    cout << "Enter the marks of English" << endl;
    cin >> marks1;
     cout << "Enter the marks of Computer" << endl;
    cin >> marks2;
     cout << "Enter the marks of Science" << endl;
    cin >> marks3;
     cout << "Enter the marks of Maths" << endl;
    cin >> marks4;
     cout << "Enter the marks of Nepali" << endl;
    cin >> marks5;
    int total = marks1+marks2+marks3+marks4+marks5;
    float aggregate = total/5;
    float percentage = total/5;
    cout << "Total marks of the student is :" << total << endl;
    cout << "percentage is " << percentage  << "%" << endl;
    return 0;



}