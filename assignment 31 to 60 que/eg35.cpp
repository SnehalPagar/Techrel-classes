/*35. Write a program in C++ to compute the specified expressions and print the output.
Sample Output:
Compute the specified expressions and print the output:
------------------------------------------------------------
 Result of the expression is (25.5 * 3.5 - 3.5 *3.5) / (40.5 - 4.5) is : 2.13889*/
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "\n the specified expressions and print the output:";
    cout << "\n------------------------\n";
    x=(25.5 * 3.5 - 3.5 *3.5) / (40.5 - 4.5);
    cout<<"\n result of the expression: "<<x;
    cout<<endl;
    return 0;
}
