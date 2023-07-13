#include <iostream>

using namespace std;

int main()
{
    char repeat_calculation = 'y';

while (repeat_calculation == 'y' || repeat_calculation == 'Y'){
    double length_of_room, width_of_room, length_of_carpet, amount_of_carpet, width_of_carpet, cost, total_cost, area_of_room, area_of_carpet;

    cout << "enter the length of room:" << endl;
    cin >> length_of_room;
    cout << "enter the width of room:" << endl;
    cin >> width_of_room;
    cout << "enter the length of carpet:" << endl;
    cin >> length_of_carpet;
    cout << "enter the width of carpet:" << endl;
    cin >> width_of_carpet;
    cout << "enter the cost of carpet:" << endl;
    cin >> cost;

    area_of_room = length_of_room * width_of_room;
    area_of_carpet = length_of_carpet * width_of_carpet;

    amount_of_carpet = (area_of_room / area_of_carpet);
    total_cost =  amount_of_carpet * cost;


    cout << "total carpet needed is : " << amount_of_carpet << endl;s
    cout << "your total cost is : " << total_cost << endl;
    cout << "calculate again y/n" << endl;
    cin >> repeat_calculation;
}

    return 0;
}
