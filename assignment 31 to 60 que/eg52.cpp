/*52. Write a program in C++ to enter two angles of a triangle and find the third angle.
Sample Output:
Find the third angle of a triangle :
-----------------------------------------
Input the 1st angle of the triangle : 35
Input the 2nd angle of the triangle : 35
The 3rd of the triangle is : 110 */
#include<iostream>
using namespace std;
int main()
{
    float ang1,ang2,ang3;
	cout << "\n find the third angle of a triangle :\n"<<endl;
	cout << "-------------------------------------\n";
    cout<<" the 1st angle of the triangle : ";
    cin>>ang1;
    cout<<" the 2nd angle of the triangle : ";
    cin>>ang2;
	ang3=180-(ang1+ang2);
    cout <<"The 3rd of the triangle is :"<<ang3<<endl;
	cout << endl;
    return 0;
}
