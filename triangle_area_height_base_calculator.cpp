#include <iostream>

using namespace std;

int main()
{
    const double dividor = 2.0;
    char repeat_calculation = 'y';

while (repeat_calculation == 'y' || repeat_calculation == 'Y'){
    double base, height, area, newbase, newheight;
    char output_choice;

    cout << "what do you want to calculate\nenter b for base\nenter h for height\nenter a for area" << endl;
    cin >> output_choice;

    if (output_choice == 'a' || output_choice == 'A'){
        cout << "enter the base :" << endl;
        cin >> base;
        cout << "enter the height :" << endl;
        cin >> height;
        area = (base * height) / dividor;
        cout << "area of the triangle is : " << area << endl;
        cout << "calculate again y/n" << endl;
        cin >> repeat_calculation;
    }else if (output_choice == 'b' || output_choice == 'B'){
        cout << "enter the height :" << endl;
        cin >> height;
        cout << "enter the area :" << endl;
        cin >> area;

        newheight = height / dividor;
        base = area / newheight;

        cout << "base of triangle is : " << base << endl;
        cout << "calculate again y/n" << endl;
        cin >> repeat_calculation;
    }else if (output_choice == 'h' || output_choice == 'H'){
        cout << "enter the base :" << endl;
        cin >> base;
        cout << "enter the area :" << endl;
        cin >> area;

        newbase = base / dividor;
        height = area / newbase;

        cout << "height of triangle is : " << height << endl;
        cout << "calculate again y/n" << endl;
        cin >> repeat_calculation;
    }else {
        cout << "Invalid input" << endl;
        cout << "calculate again y/n" << endl;
        cin >> repeat_calculation;
    }
}

    return 0;
}
