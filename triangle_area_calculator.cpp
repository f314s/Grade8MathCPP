#include <iostream>

using namespace std;

int main()
{
    const double dividor = 2;
    char repeat_calculation = 'y';

while (repeat_calculation == 'y' || repeat_calculation == 'Y'){
    double height, base, result;
    cout << "enter the base: " << endl;
    cin >> base;
    cout << "enter the height: " << endl;
    cin >> height;

    result = (base * height) / dividor;

    cout << "the triangle's area is : " << result << endl;
    cout << "calculate again y/n" << endl;
    cin >> repeat_calculation;
}

    return 0;
}
