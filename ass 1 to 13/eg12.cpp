/*12.Write a program in C++ to add two numbers accept through keyboard.
Sample Output:
Sum of two numbers :
-------------------------
Input 1st number : 25
Input 2nd number : 39
The sum of the numbers is : 64*/
#include <iostream>
using namespace std;
int main()
{
	int num1, num2, sum;
    cout<<"\n Sum of two numbers :"<<endl;
	cout<<"input 1st number : ";
	cin >> num1 ;
	cout<<"input 2nd number : ";
	cin >> num2;
	sum = num1 + num2;
	cout<<"sum of the numbers is :"<<sum<<endl;
	cout<<endl;
	return 0;
}
