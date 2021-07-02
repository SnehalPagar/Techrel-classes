#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long bn1,bn2;
	int i=0, r=0;
	int sum[20];
    cout << "\n Addition of two binary numbers:"<<endl;
	cout << "-----------------------------------\n";
	cout << "the 1st binary number: ";
	cin>> bn1;
	cout << "the 2nd binary number: ";
	cin>> bn2;
    while (bn1 != 0 || bn2 != 0)
    {
        sum[i++] = (int)((bn1 % 10 + bn2 % 10 + r) % 2);
        r = (int)((bn1 % 10 + bn2 % 10 + r) / 2);
        bn1 = bn1 / 10;
        bn2 = bn2 / 10;
    }
    if (r != 0)
    {
        sum[i++] = r;
    }
    --i;
    cout<<" The sum of two binary numbers is: ";
    while (i >= 0) {cout<<(sum[i--]);
  }
   cout<<("\n");
 }
