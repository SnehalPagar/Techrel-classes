//19. Write a program in C++ to find the area and circumference of a circle.
//Sample Output:
//Find the area and circumference of any circle :
//----------------------------------------------------
//Input the radius(1/2 of diameter) of a circle : 5
//The area of the circle is : 78.5397
//The circumference of the circle is : 31.4159
#include <iostream>
using namespace std;
int main()
{
    int rad;
    float area,circumference;
    cout << "\n find the area and circumference of any circle:";
    cout << "\n------------------------\n";
    cout<<"\n input the radius of a circle:";
    cin>>rad;
    area=3.14*rad*rad;
    circumference=2*3.14*rad;
    cout<<"\n area of a circle is: "<< area<< endl;
    cout<<"\n circumference of the circle is: "<< circumference<< endl;
    cout << endl;
    return 0;
}
