//17.Write a program in C++ to find the Area and Perimeter of a Rectangle.
//sample Output:
//Find the Area and Perimeter of a Rectangle :
//-------------------------------------------------
//Input the length of the rectangle : 10
//Input the width of the rectangle : 15
//The area of the rectangle is : 150
//The perimeter of the rectangle is : 50
#include <iostream>
using namespace std;
int main()
{
    int len,wid,area,perimeter;
    cout << "\n Find the Area and perimeter of a rectangle:";
    cout << "\n------------------------\n";
    cout<<"\nInput the length of the rectangle:";
    cin>>len;
    cout<<"\nInput the width of the rectangle:";
    cin>>wid;
    area=len*wid;
    perimeter=2*(len+wid);
    cout<<"\n The area of a rectangle is: "<< area<< endl;
    cout<<"\n The perimeter of a rectangle is: "<< perimeter<< endl;
    cout << endl;
    return 0;
}

