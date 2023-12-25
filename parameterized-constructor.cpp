#include<iostream>
using namespace std;
// Creating a class of criminals record named cofidential_data
class confidential_data{
    private:
        int Totalcriminals;
        string Mostwanted;
    public:
    // creating a parameterised constructor taking two arguments
        confidential_data(int number,string name)
        {
            Totalcriminals = number;
            Mostwanted = name;
        }
        // creating a display function
        void display()
        {
            cout<<"Total numbers of crimainals are = "<<Totalcriminals<<endl;
            cout<<"The top most wanted criminal is "<< Mostwanted<<endl;
        }    
};
int main()
{   // And here we go call the constructor by giving two aguments
    confidential_data cdata(35,"Dawood illahi");
    cdata.display();
    return 0;
}