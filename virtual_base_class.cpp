#include<iostream>
using namespace std;
class base{
    public:
        virtual void show()
        {
            cout<<"I am the base class here :-<"<<endl;
        }
};
class derived :public base{
    public:
        void show()
        {
            cout<<"I am the derived class here:->"<<endl;
        }
};
int main()
{
    // base obj;
    // obj.show();
    // here we required to use the concept of virtual base classes
    base * bptr;
    derived obj;
    bptr = &obj;
    bptr ->show();
   
}