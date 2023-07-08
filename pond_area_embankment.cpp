#include <iostream>

using namespace std;

int main()
{
   char reapeat_calculation = 'y';

    while(reapeat_calculation == 'y' || reapeat_calculation == 'Y'){

    double length, width, embankment, result;

    cout << "enter the length: " << endl;
    cin >> length;
    cout << "enter the width: " << endl;
    cin >> width;
    cout << "enter the embankment: " << endl;
    cin >> embankment;

    double firstcal, secondcal, newnum1, newnum2, newnum3;

    newnum3 = embankment * 2;

    newnum1 = length - newnum3;
    newnum2 = width - newnum3;

    firstcal = length * width;
    secondcal = newnum1 * newnum2;

    result = firstcal - secondcal;

    cout << "your area is: " << result << endl;
    cout << "calculate again y/n " << endl;
    cin >> reapeat_calculation;

    }
    return 0;
}
