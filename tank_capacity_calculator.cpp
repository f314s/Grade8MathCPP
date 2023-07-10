#include <iostream>

using namespace std;

int main()
{
    const double cubic_meter = 1000.0;
    double num1, num2, liters, result;
    char repeat_calculation = 'y';

while (repeat_calculation == 'y' || repeat_calculation == 'Y'){
    cout << "enter depth/length/width : " << endl;
    cin >> num1;
    cout << "enter depth/length/width : " << endl;
    cin >> num2;
    cout << "enter tank capacity in liters : " << endl;
    cin >> liters;

    double dividor = num1 * num2;

    result = liters/dividor/cubic_meter;

    cout << "depth/length/width is : " << result << endl;
    cout << "calculate again y/n" << endl;
    cin >> repeat_calculation;
}

    return 0;
}
