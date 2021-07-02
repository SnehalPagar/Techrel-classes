/*48. Write a program in C++ which swap the values of two variables not using third variable.
Sample Output:
Swap two numbers without using third variable:
---------------------------------------------------
Input 1st number : 25
Input 2nd number : 20
After swapping the 1st number is : 20
After swapping the 2nd number is : 25*/
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, temp;
	cout << "\n Swap two no. without using third variable:"<<endl;
	cout << "------------------------------------------\n";
	cout << " Input 1st no. : ";
	cin >> num1 ;
	cout << " Input 2nd no. : ";
	cin >> num2;
	num2=num2+num1;
	num1=num2-num1;
	num2=num2-num1;
    cout << " after swapping the 1st no. is : "<< num1 <<"\n" ;
    cout << " after swapping the 2nd no. is : "<< num2 <<"\n" ;
}
