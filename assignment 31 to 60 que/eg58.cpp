/*58. Write a program in C++ to print the area of a polygon.
Sample Output:
Print the area of a polygon:
---------------------------------
Input the number of sides of the polygon: 7
Input the length of each side of the polygon: 6
The area of the polygon is: 130.821*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float area,s,n;
    cout << "\nPrint the area of a polygon:"<<endl;
	cout << "---------------------------------\n";
	cout << "the number of sides of the polygon: ";
	cin>> n;
	cout << "the length of each side of the polygon: ";
	cin>> s;
	area= (n*(s*s))/(4.0*tan((3.14/n)));
	cout<<"Area of the ploygon is: "<<area<<"\n";
	cout<<endl;
    return 0;
}
