//22. Write a program in C++ to find the third angle of a triangle.
//Sample Output:
//Find the third angle of a triangle :
//-----------------------------------------
//Input the 1st angle of the triangle : 30
//Input the 2nd angle of the triangle : 60
//The 3rd of the triangle is : 90
#include <iostream>
using namespace std;
int main()
{
    float angle1,angle2,angle3;
    cout << "\n find the third angle of a triangle:";
    cout << "\n------------------------\n";
    cout<<"\n input the 1st angle of the triangle:";
    cin>>angle1;
    cout<<"\n input the 2nd angle of the triangle:";
    cin>>angle2;
    angle3=180-(angle1+angle2);
    cout<<"\n the 3rd of the triangle is: "<<angle3<< endl;
    cout << endl;
    return 0;
}


