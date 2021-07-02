//18.Write a program in C++ to find the area of any triangle using Heron's Formula.
//Sample Output:
//Find the area of any triangle using Heron's Formula :
//----------------------------------------------------------
//Input the length of 1st side of the triangle : 5
//Input the length of 2nd side of the triangle : 5
//Input the length of 3rd side of the triangle : 5
//The area of the triangle is : 10.8253
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float side1,side2,side3,s,area;
    cout << "\n Find the Area of any triangle using heron's formula:";
    cout << "\n------------------------\n";
    cout<<"\nInput the length of 1st side of the triangle:";
    cin>>side1;
    cout<<"\nInput the length of 2nd side of the triangle:";
    cin>>side2;
    cout<<"\nInput the length of 3rd side of the triangle:";
    cin>>side3;
    s=(side1+side2+side3)/2;
    area=sqrt(s*(s-side1)*(s-side2)*(s-side3));
    //s=(side1+side2+side3)/2;
    cout<<"\n The area of a triangle is: "<< area<< endl;
    cout << endl;
    return 0;
}


