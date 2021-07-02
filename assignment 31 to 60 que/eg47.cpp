/*47. Write a program in C++ to find the area of any triangle using Heron's Formula.*/

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float s1,s2,s3,s,area;
    cout<<"Enter 1st side of triangle:";
    cin>>s1;
    cout<<"Enter 2nd side of triangle:";
    cin>>s2;
    cout<<"Enter 3rd side of triangle:";
    cin>>s3;
    s=(s1+s2+s3)/2;
    area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    cout<<" The area of the triangle is : "<< area << endl;
    return 0;
}

