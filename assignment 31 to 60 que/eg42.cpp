/*42. Write a language program in C++ which accepts the user's first and last name and print them in reverse order with a space between them.
Sample Output:
Print the name in reverse where last name comes first:
-----------------------------------------------------------
Input First Name: Alexandra
Input Last Name: Abramov
Name in reverse is: Abramov Alexandra */

#include<iostream>
using namespace std;
int main()
{
    char nm1[30], nm2 [30];
    cout << "\n\n print the name in reverse where last name comes first:\n";
    cout << "-----------------------------------------------------------\n";
    cout << " input First Name: ";
    cin >> nm1;
    cout << " input Last Name: ";
    cin >> nm2;

    cout << " name in reverse is: "<< nm2 << " "<< nm1 <<endl;
	cout << endl;
    return 0;
}
