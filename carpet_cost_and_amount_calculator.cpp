#include <iostream>

using namespace std;

int main()
{
    char repeat_calculation = 'y';

while (repeat_calculation == 'y' || repeat_calculation == 'Y'){
    double room_length, room_width, carpet_length, carpet_width, width_of_carpet, carpet_cost, total_carpet_cost, room_area, carpet_area, carpet_amount;

    cout << "enter the length of room:" << endl;
    cin >> room_length;
    cout << "enter the width of room:" << endl;
    cin >> room_width;
    cout << "enter the length of carpet:" << endl;
    cin >> carpet_length;
    cout << "enter the width of carpet:" << endl;
    cin >> carpet_width;
    cout << "enter the cost of carpet:" << endl;
    cin >> carpet_cost;

    room_area = room_length * room_width;
    carpet_area = carpet_length * carpet_width;

    carpet_amount = (room_area / carpet_area);
    total_carpet_cost =  carpet_amount * carpet_cost;


    cout << "total carpet needed is : " << carpet_amount << endl;
    cout << "your total cost is : " << total_carpet_cost << endl;
    cout << "calculate again y/n" << endl;
    cin >> repeat_calculation;
}

    return 0;
}
