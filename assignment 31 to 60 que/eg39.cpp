/*39.Write a program in C++ to print the following pattern.
Sample Output:
 xxxxx
x     x       x        x
x             x        x
x          xxxxxxx  xxxxxxx
x             x        x
x     x       x        x
 xxxxx*/

#include <iostream>
using namespace std;
int main()
{
    cout<<"\n sample output:";
    cout<<"\n xxxxx"<<endl;
    cout<<"x"<<"   "<<"x"<<"    "<<" x"<<" "<<"       "<<"  x"<<endl;
    cout<<"x"<<"   "<<"  "<<"   "<<" x"<<"   "<<"     "<<"  x"<<endl;
    cout<<"x"<<"   "<<"  "<<" "<<"x"<<"x"<<"x"<<"x"<<"x"<<"x"<<"x"<<"   "<<"x"<<"x"<<"x"<<"x"<<"x"<<"x"<<"x"<<endl;
    cout<<"x"<<"   "<<"  "<<"   "<<" x"<<" "<<"       "<<"  x"<<endl;
    cout<<"x"<<"   "<<"x"<<"    "<<" x"<<" "<<"       "<<"  x"<<endl;
    cout<<" xxxxx"<<endl;
    cout << endl;
    return 0;
}
