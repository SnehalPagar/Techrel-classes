/*.44. Write a language program to get the volume of a sphere with radius 6.
Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 5 */
#include <iostream>
using namespace std;
int main()
{
    int rad;
    float volsp;
    cout<< "\n Calculate the volume of a sphere :\n";
    cout<< "---------------------------------------\n";
    cout<<" input the radius of a sphere : ";
    cin>>rad;
    volsp=(4*3.14*rad*rad*rad)/3;
    cout<<"volume of a sphere is : "<< volsp << endl;
    cout << endl;
    return 0;
}
