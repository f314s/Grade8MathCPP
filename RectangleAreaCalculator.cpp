#include <iostream>

using namespace std;

int main()
{
   char process = 'y';

    while(process == 'y' || process == 'Y'){

    double num1, num2, num3, result;

    cout << "enter the length: " << endl;
    cin >> num1;
    cout << "enter the width: " << endl;
    cin >> num2;
    cout << "enter the embankment: " << endl;
    cin >> num3;

    double firstcal, secondcal, newnum1, newnum2, newnum3;

    newnum3 = num3 * 2;

    newnum1 = num1 - newnum3;
    newnum2 = num2 - newnum3;

    firstcal = num1 * num2;
    secondcal = newnum1 * newnum2;

    result = firstcal - secondcal;

    cout << "your area is: " << result << endl;
    cout << "calculate again y/n " << endl;
    cin >> process;

    }
    return 0;
}
