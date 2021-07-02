/*53. Write a program in C++ to calculate area of an equilateral triangle.
Sample Output:
Calculate the area of the Equilateral Triangle :
----------------------------------------------------
Input the value of the side of the equilateral triangle: 5
The area of equilateral triangle is: 10.8253*/
#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    float area,side;
    cout << "\nthe area of the Equilateral Triangle :"<<endl;
    cout << " -----------------------------------------\n";
    cout<<"the value of the side of the equilateral triangle: ";
    cin>>side;
    area = sqrt(3)/4*(side*side);
    cout<<" The area of equilateral triangle is: "<<area<<endl;
    cout << endl;
    return 0;
}
