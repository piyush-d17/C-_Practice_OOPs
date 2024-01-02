#include<iostream>
using namespace std;

class demo {
private:
    int a, b;

public:
    void getdata() {
        cout << "Enter a value" << endl;
        cin >> a;
        cout << "Enter another value" << endl;
        cin >> b;
    }

    friend int sum(demo);
};

// Friend function to calculate the sum of private members of demo class
int sum(demo aa) {
    return aa.a + aa.b;
}

int main() {
    demo aa;
    aa.getdata();  // Input values for a and b
    cout << "The sum is equal to the " << sum(aa);  // Display the sum
    return 0;
}
