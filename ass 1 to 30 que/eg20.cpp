//20. Write a program in C++ to convert temperature in Celsius to Fahrenheit.
//Sample Output:
//Convert temperature in Celsius to Fahrenheit :
//---------------------------------------------------
//Input the temperature in Celsius : 35
//The temperature in Celsius : 35
//The temperature in Fahrenheit : 95
#include <iostream>
using namespace std;
int main()
{
    int rad;
    float celcius,fahrenheit;
    cout << "\n convert temperature in celcius to fahrenheit:";
    cout << "\n------------------------\n";
    cout<<"\n input the temperature of a celcius:";
    cin>>celcius;
    fahrenheit=(celcius*9)/5+32;
    cout<<"\n temperature in celcius: "<< celcius<< endl;
    cout<<"\n temperature in fahrenheit: "<< fahrenheit<< endl;
    cout << endl;
    return 0;
}
