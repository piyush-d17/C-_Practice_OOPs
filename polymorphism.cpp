#include <iostream>
using namespace std;
class poly{
    public:
        void fun()
        {
            cout<<"I am a function with no argument"<<endl;
        }
        void fun(int x)
        {
            cout<<"I am a function with int argument"<<endl;
        }
        void fun(int x,int y)
        {
            cout<<"I am a function with double argument"<<endl;
        }
};
int main()
{
    poly obj;
    obj.fun();
    obj.fun(5);
    obj.fun(7,7);
    return 0;
}
