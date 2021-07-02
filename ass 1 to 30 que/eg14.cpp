//14. Write a program in C++ to calculate the volume of a sphere.
//Sample Output:
//Calculate the volume of a sphere :
//---------------------------------------
//Input the radius of a sphere : 6
//The volume of a sphere is : 904.32
#include <iostream>
using namespace std;
int main()
{
    int radius;
    float volsphere;
    cout << "\n Calculate the volume of a sphere :<<endl";
    cout << "\n------------------------\n";
    cout<<"\nInput the radius of a sphere:";
    cin>>radius;
    volsphere=(4*3.14*radius*radius*radius)/3;
    cout<<" The volume of a sphere is: "<< volsphere<< endl;
    cout << endl;
    return 0;
}

