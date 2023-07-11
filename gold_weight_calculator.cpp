#include <iostream>

using namespace std;

int main()
{
    const double air_weight_multiplier = 0.00129;
    const double cubic_meter = 1000.0;
    char repeat_calculation = 'y';

    while (repeat_calculation == 'y' || repeat_calculation == 'Y'){
        double height, length, width, volume, weight;
        cout << "enter the height :" << endl;
        cin >> height;
        cout << "enter the length :" << endl;
        cin >> length;
        cout << "enter the width :" << endl;
        cin >> width;

        volume = height * length * width;
        weight = (volume * air_weight_multiplier) * cubic_meter;

        cout << "air in that room is : " << weight << endl;
        cout << "calculate again y/n" << endl;
        cin >> repeat_calculation;
    }

    return 0;
}
