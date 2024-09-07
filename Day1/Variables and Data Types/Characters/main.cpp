#include <iostream>
using namespace std;

int main()
{
    char ch1{'a'};
    char ch2{'r'};
    char ch3{'r'};
    char ch4{'r'};
    char ch5{'o'};
    char ch6{'w'};

    cout << ch1 << endl;
    cout << ch2 << endl;
    cout << ch3 << endl;
    cout << ch4 << endl;
    cout << ch5 << endl;
    cout << ch6 << endl;

    // One byte in memory : 2^8 = 256 different values (0 ~ 255)

    char value = 65; // ASCII character code for 'A'

    cout << value << endl;
    cout << static_cast<int>(value) << endl; // Turn the character value into integer

    return 0;
}