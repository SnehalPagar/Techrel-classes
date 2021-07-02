/*50. Write a program in C++ to enter length in centimeter and convert it into meter and kilometer.
Sample Output:
Convert centimeter into meter and kilometer :
--------------------------------------------------
Input the distance in centimeter : 250000
The distance in meter is: 2500
The distance in kilometer is: 2.5 */

#include<iostream>
using namespace std;
int main()
{
    float km, meter,centimeter;
	cout << "\n Convert centimeter into meter and kilometer:"<<endl;
	cout << "-------------------------------------------\n";
    cout << "the distance in centimeter : ";
    cin >> centimeter;
	meter = (centimeter/100);
	km = (centimeter/100000);
	cout << " The distance in meter is: "<< meter << endl;
	cout << " The distance in kilometer is: "<< km << endl;
	cout << endl;
    return 0;
}
