#include <iostream>

using namespace std;

int main()
{   char lopinput = 'n';

    double meter;

    while (lopinput == 'n' || lopinput == 'N'){
    cout << "Enter your length in meter:" << endl;
    cin >> meter;

    cout << meter*1000 << " Millimeter" << endl;
    cout << meter*100 << " Centimeter" << endl;
    cout << meter*10 << " Decimeter" << endl;
    cout << meter*0.1 << " Decameter" << endl;
    cout << meter*0.01 << " Hectometer" << endl;
    cout << meter*0.001 << " Kilometer" << endl;

    cout << "do you want to quit y/n" << endl;
    cin >> lopinput;

    }
    return 0;
}
