#include<iostream>
using namespace std;

// Creating a base class 
class base{ 
//declare a function in the public section    
    public:    
    void display(){
        cout<<"I am the base or parent class"<<endl;
    }
};
//  Creating a derived class or child class
class derived : public base {
    public:
    void extra()
    {
        cout<<"I am the base or child class"<<endl;
        cout<<"I am having some extra properties"<<endl;
    }
};
int main()
{
    derived obj;
    obj.display();
    obj.extra();
}