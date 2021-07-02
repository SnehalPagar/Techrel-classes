/*57. Write a program in C++ to print the area of a hexagon.
Sample Output:
Print the area of a hexagon:
---------------------------------
Input the side of the hexagon: 6
The area of the hexagon is: 93.5307*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float area,side;
    cout << "\nPrint the area of a hexagon:"<<endl;
	cout << "---------------------------\n";
	cout << "the side of the hexagon: ";
	cin>> side;
	area= (6*(side*side))/(4*tan(3.14/6));
	cout<<"\nthe area of the hexagon is: "<<area<<"\n";
    return 0;
}
