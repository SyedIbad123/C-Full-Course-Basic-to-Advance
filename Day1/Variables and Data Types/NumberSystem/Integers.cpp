#include <iostream>
using namespace std;

int main()
{

    int number1;      // variable contains garbage value/data.
    int number2{};    // initializes to 0 if we donot explicitly put any value in curly braces
    int number3{10};  // initializes to 10
    int number4(4);   // initializes to 4
    int number5 = 33; // ==    ==    == 33
    // int number6{2.9};    // curly braces donot implicitly convert decimal into int
    int number7(2.9); // functional declaration converts and floor the decimal number into int

    int sum{number3 + number4}; // can use expressionas initializer

    cout << "Number1 " << number1 << endl;
    cout << "Number2 " << number2 << endl;
    cout << "Number3 " << number3 << endl;
    cout << "Number4 " << number4 << endl;
    cout << "Number5 " << number5 << endl;
    // cout << "Number 6 " << number6 << endl;
    cout << "Number 7 " << number7 << endl;
    cout << "Sum " << sum << endl;

    cout << "size of int " << sizeof(int) << endl; // it results the size of int in memory i.e ==> 4 bytes
    cout << "size of sum " << sizeof(sum) << endl;

    return 0;
}