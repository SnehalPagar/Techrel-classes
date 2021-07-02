/*31. Write a program in C++ to input a single digit number and print a rectangular form of 4 columns and 6 rows.
Sample Output:
Make a rectangular shape by a single digit number :
--------------------------------------------------------
Input the number : 5
5555
5 5cout<<" "<<x<<" "<<x<<endl;
5 5
5 5
5 5
5555*/
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "\n make a rectangular shape by a single digit no:";
    cout << "\n------------------------\n";
    cout<<"\n input the no:";
    cin>>x;
    cout<<x<<x<<x<<x<<endl;
    cout<<" "<<x<<" "<<x<<endl;
    cout<<" "<<x<<" "<<x<<endl;
    cout<<" "<<x<<" "<<x<<endl;
    cout<<x<<x<<x<<x<<endl;
    cout << endl;
    return 0;
}
