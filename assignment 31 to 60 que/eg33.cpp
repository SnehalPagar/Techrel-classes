/*33. Write a program in C++ to divide two numbers and print on the screen.
Sample Output:
Divide two numbers and print:
----------------------------------
The quotient of 30 and 10 is : 3*/

#include <iostream>
using namespace std;
int main()
{
    int x=30,y=10,z;
    cout << "\n divide two no and print:";
    cout << "\n------------------------\n";
    cout<<"\n input the no:";
    z=x/y;
    cout<<"\nThe quotient of 30 and 10 is : "<<z;
    cout<<endl;
    return 0;
}
