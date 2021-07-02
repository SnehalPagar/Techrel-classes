/*46. Write a program in C++ to calculate the volume of a cylinder.
Sample Output:
Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 4
Input the height of the cylinder : 8
The volume of a cylinder is : 401.92 */

#include <iostream>
using namespace std;
int main()
{
    int rad,height;
    float volcylinder;
    cout << "\n the volume of a cylinder :\n";
    cout << "------------------------------\n";
    cout<<"the radius of the cylinder : "<<endl;
    cin>>rad;
    cout<<"the height of the cylinder : "<<endl;
    cin>>height;
    volcylinder=(3.14*rad*rad*height);
    cout<<"volume of a cylinder is : "<< volcylinder << endl;
    cout << endl;
    return 0;
}
