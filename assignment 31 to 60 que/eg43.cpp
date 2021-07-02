/*43. Write a language program which accepts the radius of a circle from the user and compute the area and circumference.
Sample Output:
Find the area and circumference of any circle :
----------------------------------------------------
Input the radius(1/2 of diameter) of a circle : 5
The area of the circle is : 78.5397
The circumference of the circle is : 31.4159 */
#include<iostream>
using namespace std;
int main()

{
    float rad, area, circumference;
    cout << "\nFind the area and circumference of any circle :\n";
    cout << "-------------------------------------------\n";
    cout<<" Input the radius of a circle : ";
    cin>>rad;
    circumference = 2*3.14*rad;
    area = 3.14*(rad*rad);
    cout<<" area of the circle is : "<< area <<endl;
    cout<<" circumference of the circle is : "<< circumference <<endl;
    cout << endl;
    return 0;
}
