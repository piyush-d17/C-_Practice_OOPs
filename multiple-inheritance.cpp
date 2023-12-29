#include <iostream>
using namespace std;
class A{
public:
    void displayA()
    {
        cout<<"I am the class A"<<endl;
    }
}; 
class B{
public:
    void displayB()
    {
        cout<<"I am the class B"<<endl;
    }
}; 
class C : public B,public A{
    public:
    void displayC(){
    cout<<"I am the class C"<<endl;
    }
};
int main()
{
    C obj;
    cout<<"Calling from the class C"<<endl;
    obj.displayA();
    obj.displayB();
    obj.displayC();
    return 0;
}