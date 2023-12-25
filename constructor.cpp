#include<iostream>
#include<string>
using namespace std;
// Creating a class name supra
class supra{
    // supra has both public and private members
    private:
        int turbo;
        int exhaust;
    public:
        string key;
        int sound;
    // Creating a constructor which help to acess the member variable of supra
    supra()
    {
        // Assigning values to the members of the class supra
        turbo = 7;
        exhaust = 778;
        key = "available";
        sound = 40; 
    }
    // Creating a void function display which help us to display the properties of the class supra
    void display()
    {
        cout<<"The car has V "<<turbo<<"Engine"<<endl;
        cout<<"Along with "<<exhaust<<"exhaust"<<endl;
        cout<<"Key is "<< key<<endl;
        cout<<"it has "<<sound<<"db sound"<<endl;
    }    
};

int main()
{
    // And here we go creating an object of the supra class as sp
    supra sp;
    // Call the main function.
    sp.display();
    return 0;
}