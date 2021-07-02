/*27. Write a program in C++ to convert temperature in Celsius to Kelvin.
Sample Output:
Convert temperature in Celsius to Kelvin :
---------------------------------------------------
Input the temperature in Celsius : 26.85
The temperature in Celsius : 26.85
The temperature in Kelvin : 300*/

#include <iostream>
using namespace std;
int main()
{
    float k,c;
    cout << "\n convert temperature in celsius to kelvin:";
    cout << "\n------------------------\n";
    cout<<"\n input the temperature of a celsius:";
    cin>>c;
    k=c+273.15;
    cout<<"\n temperature in celsius: "<< c<< endl;
    cout<<"\n temperature in kelvin: "<< k<< endl;
    cout << endl;
    return 0;
}
