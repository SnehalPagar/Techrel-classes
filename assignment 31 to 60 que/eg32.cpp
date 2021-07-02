/*32. Write a program in C++ to check whether a number is positive, negative or zero.
Sample Output:
Check whether a number is positive, negative or zero :
-----------------------------------------------------------
Input a number : 8
The entered number is positive*/
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "\n check whether a no is positive, negative or zero:";
    cout << "\n------------------------\n";
    cout<<"\n input the no:";
    cin>>x;
    if(x<0)
    {
    cout<<"\n no is negative:"<<" "<<x;
    }
    else if(x>0)
    {
    cout<<"\n no is positive"<<" "<<x;
    }
    else
    {
    cout<<"\n no is zero"<<" "<<x<<endl;
    }
    return 0;
}
