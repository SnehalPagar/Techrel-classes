/* 45. Write a program in C++ to calculate the volume of a cube.
Sample Output:
Calculate the volume of a cube :
---------------------------------------
Input the side of a cube : 5
The volume of a cube is : 125 */
#include <iostream>
using namespace std;
int main()
{
    int side;
    float volcube;
    cout << "\n the volume of a cube :\n"<<endl;
    cout << "-------------------------------\n";
    cout<<" the side of a cube : ";
    cin>>side;
    volcube=(side*side*side);
    cout<<" volume of a cube is : "<< volcube<<endl;
    cout << endl;
    return 0;
}
