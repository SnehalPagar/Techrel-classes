#include<iostream>
using namespace std;
class myclass
{
    public:
    void myMethod()
    {
        cout<<"HELLO WORLD!";
        cout<<"\nHELLO WORLD!";
    }
};
void mymethod1()
{
    cout<<"HELLO WORLD! 1";
    cout<<endl<<"HELLO WORLD! 1";
}
int main()
{
    myclass myobj;
    myobj.myMethod();
    return 0;
}
