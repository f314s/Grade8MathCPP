#include <iostream>

using namespace std;

int main()
{
    const double gold_weight_multiplier = 19.3;
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
        weight = volume * gold_weight_multiplier;

        cout << "weight is : " << weight << endl;
        cout << "calculate again y/n" << endl;
        cin >> repeat_calculation;
    }

    return 0;
}
