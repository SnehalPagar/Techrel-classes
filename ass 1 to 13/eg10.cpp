/*10. Write a program in C++ to formatting the output.
Sample Output:
Formatting the output :
----------------------------
The value of pi : 3.1416
The value of pi 4 decimal place of total width 8 : | 3.1416|
The value of pi 4 decimal place of total width 10 : | 3.1416|
The value of pi 4 decimal place of total width 8 : |--3.1416|
The value of pi 4 decimal place of total width 10 : |----3.1416|
The value of pi in scientific format is : 3.1416e+00
Status in number : 0
Status in alphabet : false*/
#include <iostream>
using namespace std;
int main()
{
    double pi=3.1416;
    cout<<"formatting the output:"<<endl;
    cout<<"The value of pi:"<<pi<<endl;
    cout<<"The value of pi 4 decimal place of total width 8: |" <<pi<<"|"<<endl;
    cout<<"The value of pi 4 decimal place of total width 10: |" <<pi<<"|"<<endl;
    cout<<"The value of pi 4 decimal place of total width 8: |"<<"--"<<pi<<"|"<<endl;
    cout<<"The value of pi 4 decimal place of total width 10: |"<<"----"<<pi<<"|"<<endl;
    cout<<scientific;
    cout<<"\nThe value of pi in scientific format is :"<<pi<<endl;
    bool done=false;
    cout<<"\nStatus of pi: "<<done<<endl;
    cout<<boolalpha;
    cout<<"\nStatus in alphabet: "<<done<<endl;
    cout << endl;
    return 0;
}

