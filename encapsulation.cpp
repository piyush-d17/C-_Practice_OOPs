#include<iostream>
using namespace std;
// There are various access specifiers public private protected  
class employee{
    // If you set the salary to private then you can't acess the salary outside the class
    public:
        int salary;
        void set_salary()
        {
            cout<<"The salary is setted by the manager "<<endl;
            salary=50000;
        }
};
int main()
{
    employee obj;
    obj.set_salary();
    cout<<"The salary of the employee is = "<<obj.salary<<endl;
    return 0;
}