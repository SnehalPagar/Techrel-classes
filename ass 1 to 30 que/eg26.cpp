/*26. Write a program in C++ to convert temperature in Fahrenheit to Kelvin.
Sample Output:
Convert temperature in Fahrenheit to Kelvin :
---------------------------------------------------
Input the temperature in Fahrenheit : 80.33
The temperature in Fahrenheit : 80.33
The temperature in Kelvin : 300*/

#include <iostream>
using namespace std;
int main()
{
    float k,f;
    cout << "\n convert temperature in fahrenheit to kelvin:";
    cout << "\n------------------------\n";
    cout<<"\n input the temperature of a fahrenheit:";
    cin>>f;
    k=((f-32)/1.8)+273.15;
    cout<<"\n temperature in fahrenheit: "<<f<< endl;
    cout<<"\n temperature in kelvin: "<< k<< endl;
    cout << endl;
    return 0;
}
