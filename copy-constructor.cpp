#include<iostream>

using namespace std;
class demo{
    private:
        int x;
    public:
        int y;
    demo()
    {
        x=10;
        y=20;
    }
    // create a parameterized constructor
    demo(demo &z)
    {
        x=z.x;
        y=z.y;
    }
    void display()
    {
        cout<<"The value of x = "<<x<<endl;
        cout<<"The value of y = "<<y<<endl;
    }        
};
int main()
{
    demo obj;
    obj.display();
    demo obj2(obj);
    obj2.display();
    return 0;
}