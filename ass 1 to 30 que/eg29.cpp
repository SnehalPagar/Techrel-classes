/*29. Write a program in C++ to compute quotient and remainder.
Sample Output:
Compute quotient and remainder :
-------------------------------------
Input the dividend : 25
Input the divisor : 3
The quotient of the division is : 8
The remainder of the division is : 1*/

#include<iostream>
using namespace std;
int main()
{
    int dividend,divisor,quotient,remainder;
    cout <<"compute quotient and remainder:"<<endl;
    cout<<"enter the dividend:"<<endl;
    cin>>dividend;
    cout<<"enter the divisor:"<<endl;
    cin>>divisor;
    quotient=dividend/divisor;
    remainder=dividend%divisor;
    cout<<"the quotient of the division: "<< quotient;
    cout<<"\n the remainder of the division:  "<< remainder;
    return 0;
}
