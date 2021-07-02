/*49. Write a program in C++ to print the code (ASCII code / Unicode code etc.) of a given character.
Sample Output:
Print code (ASCII code / Unicode code etc.) of a given character:
-----------------------------------------------------------------------
Input a character: a
The ASCII value of a is: 97
The character for the ASCII value 97 is: a */
#include <iostream>
using namespace std;
int main()
{
    char sing_ch;
	cout << "\n print code (ASCII code / Unicode code etc.) of a  given character:\n";
	cout << "---------------------------------------------------------\n";
 	cout << " input a character: ";
    cin >> sing_ch;
    cout <<" the ASCII value of "<<sing_ch<<" is: " <<(int)sing_ch << endl;
    cout <<" the character for the ASCII value "<<(int)sing_ch <<" is: "<<(char)((int)sing_ch) << endl<< endl;
    return 0;
}
