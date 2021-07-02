/*54. Write a program in C++ to enter P, T, R and calculate Simple Interest.
Sample Output:
Calculate the Simple Interest :
-----------------------------------
Input the Principle: 20000
Input the Rate of Interest: 10
Input the Time: 1.5
The Simple interest for the amount 20000 for 1 years @ 10 % is: 2000 */
#include<iostream>
using namespace std;
int main()
{
	int rate,principle,time,interest;
    cout << "\n Calculate the Simple Interest :"<<endl;
    cout << " ---------------------------------\n";
	cout<<"input the Principle: ";
	cin>>principle;
	cout<<"input the Rate of Interest: ";
	cin>>rate;
	cout<<"input the Time: ";
	cin>>time;
	interest=(principle*rate*time)/100;
	cout<<" the Simple interest for the amount "<<principle<<" for "<<time<<" years @ "<<rate<<" % is: "<<interest;
    cout << endl;
	return 0;
}
