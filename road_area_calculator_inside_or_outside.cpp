#include <iostream>

using namespace std;

int main()
{
    double num1, num2, num3, result, newnum1, newnum2, newnum3, firstcal, secondcal;

    char in_or_out, process;
    process = 'y';

    while (process == 'y' || process == 'Y'){
        cout << "enter your field's length: " << endl;
        cin >> num1 ;
        cout << "enter your field's width: " << endl;
        cin >> num2 ;
        cout << "where is your road\nif inside enter i\nif outside enter o" << endl;
        cin >> in_or_out;
        cout << "enter your road width: " << endl;
        cin >> num3;

    if (in_or_out == 'i' || in_or_out == 'I'){
        newnum3 = num3 * 2;
        newnum1 = num1 - newnum3;
        newnum2 = num2 - newnum3;

        firstcal = num1 * num2;
        secondcal = newnum1 * newnum2;

        result = firstcal - secondcal;

        cout << "your area is: " << result << endl;

        cout << "do you want to calculate again y/n" << endl;
        cin >> process;
    }else if (in_or_out == 'o' || in_or_out == 'O'){
        newnum3 = num3 * 2;
        newnum1 = num1 + newnum3;
        newnum2 = num2 + newnum3;

        firstcal = num1 * num2;
        secondcal = newnum1 * newnum2;

        result = secondcal - firstcal;

        cout << "your area is: " << result << endl;

        cout << "do you want to calculate again y/n" << endl;
        cin >> process;
    }else {
        cout << "Invalid" << endl;
        cout << "do you want to calculate again y/n" << endl;
        cin >> process ;
    }

    }



    return 0;
}
