//24. Write a program in C++ to convert temperature in Kelvin to Fahrenheit.
//Sample Output:
//Convert temperature in Kelvin to Fahrenheit :
//---------------------------------------------------
//Input the temperature in Kelvin : 300
//The temperature in Kelvin : 300
//The temperature in Fahrenheit : 80.33
#include <iostream>
using namespace std;
int main()
{
    int rad;
    float k,f;
    cout << "\n convert temperature in kelvin to fahrenheit:";
    cout<<"\n input the temperature of a kelvin:";
    cin>>k;
    f=(k-273.15)*(1.8)+32;
    cout<<"\n temperature in kelvin: "<< k<< endl;
    cout<<"\n temperature in fahrenheit: "<< f<< endl;
    cout << endl;
    return 0;
}
