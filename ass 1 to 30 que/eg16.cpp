//16.Write a program in C++ to calculate the volume of a cylinder.
//Sample Output:
//Calculate the volume of a cylinder :
//-----------------------------------------
//Input the radius of the cylinder : 6
//Input the height of the cylinder : 8
//The volume of a cylinder is : 904.32
#include <iostream>
using namespace std;
int main()
{
    int radius,height;
    float volcylinder;
    cout << "\n Calculate the volume of a cylinder :";
    cout << "\n------------------------\n";
    cout<<"\nInput the radius of the cylinder:";
    cin>>radius;
    cout<<"\nInput the height of the cylinder:";
    cin>>height;
    volcylinder=3.14*radius*radius*height;
    cout<<" The volume of a cylinder is: "<< volcylinder<< endl;
    cout << endl;
    return 0;
}


