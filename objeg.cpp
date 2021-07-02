#include<iostream>
using namespace std;
class Mysum
{
    public:
        int sum,a,b;
        int sum;
};
int main()
{
    myclass myObj;
    myObj.myNum=15;
    myObj.myString="Some text";

    cout<<myObj.myNum<<"\n";
    cout<<myObj.myString;

    Mysum myObjsum;
    myObjsum.a=10;
    myObjsum.b=20;
    myObjsum.sum=20;
    cout<<endl<<"sum:"<<myObjsum.sum;
    return 0;
}
