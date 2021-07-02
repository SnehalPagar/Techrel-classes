/*25. Write a program in C++ to convert temperature in Kelvin to Celsius.
Sample Output:
Convert temperature in Kelvin to Celsius :
------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Celsius : 26.85 */

#include <iostream>
using namespace std;
int main()
{
    float c,k;
    cout << "\n convert temperature in kelvin to celcius:"<<endl;
    cout<<"\n input the temperature in kelvin:";
    cin>>k;
    c=(k-273.15);
    cout<<"\n temperature in kelvin: "<< k<< endl;
    cout<<"\n temperature in celcius: "<< c<< endl;
    cout << endl;
    return 0;

}
