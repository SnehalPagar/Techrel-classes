//15. Write a program in C++ to calculate the volume of a cube.
//Sample Output:
//Calculate the volume of a cube :
//---------------------------------------
//Input the side of a cube : 5
//The volume of a cube is : 125
#include <iostream>
using namespace std;
int main()
{
    int side;
    float volcube;
    cout << "\n Calculate the volume of a cube :";
    cout << "\n------------------------\n";
    cout<<"\nInput the side of a cube:";
    cin>>side;
    volcube=side*side*side;
    cout<<" The volume of a cube is: "<< volcube<< endl;
    cout << endl;
    return 0;
}


