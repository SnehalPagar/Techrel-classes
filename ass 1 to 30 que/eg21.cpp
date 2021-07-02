//21. Write a program in C++ to convert temperature in Fahrenheit to Celsius.
//Sample Output:
//Convert temperature in Fahrenheit to Celsius :
//---------------------------------------------------
//Input the temperature in Fahrenheit : 95
//The temperature in Fahrenheit : 95
//The temperature in Celsius : 35
#include <iostream>
using namespace std;
int main()
{
    float celcius,fahrenheit;
    cout << "\n convert temperature in fahrenheit to celcius:";
    cout << "\n------------------------\n";
    cout<<"\n input the temperature of a fahrenheit:";
    cin>>fahrenheit;
    celcius=((fahrenheit*5.0)-(5.0*32))/9;
    cout<<"\n temperature in fahrenheit: "<<fahrenheit<< endl;
    cout<<"\n temperature in celcius: "<< celcius<< endl;
    cout << endl;
    return 0;

}


