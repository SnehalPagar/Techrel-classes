/*55. Write a program in C++ to enter P, T, R and calculate Compound Interest.
Sample Output:
Calculate the Compound Interest :
-------------------------------------
Input the Principle: 20000
Input the Rate of Interest: 10
Input the Time: 1.5
The Interest after compounded for the amount 20000 for 1.5 years @ 10
% is: 3073.8 The total amount after compounded for the amount 20000 for 1.5 years @
10 % is: 23073.8*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float principle,rate,time,cp,ci;
    cout << "\nCalculate the Compound Interest :"<<endl;
    cout << " -----------------------------------\n";
	cout<<"\n input the Principle: ";
	cin>>principle;
	cout<<"\n input the Rate of Interest: ";
	cin>>rate;
	cout<<"\n Input the Time: "<<endl;
	cin>>time;
    ci=principle*pow((1+rate/100),time)-principle;
    cp=principle*pow((1+rate/100),time);
    cout<<"\n interest after compounded for the amount "<<principle<<" for "<<time<<" years @ "<<rate<<" % is: "<<ci<<endl;
	cout<<"\n total amount after compounded for the amount "<<principle<<" for "<<time<<" years @ "<<rate<<" % is: "<<cp<<endl;
    cout << endl;
    return 0;
}
