#include<iostream>
#include<string>
using namespace std;
class myclass{
    public:
        int myNum;
        //string mystring;
    };
    int main(){
        myclass myObj;

        myObj.myNum=15;
        //myObj.myString="some text";

        cout<<myObj.myNum<<"\n";
        //cout<<myObj.myString;

        return 0;
    }
