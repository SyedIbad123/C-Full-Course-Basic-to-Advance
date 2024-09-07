#include <iostream>
#include <string>
using namespace std;

int main()
{
    // int age;
    // string name;

    // cout << "please type your name and age" << endl;

    // cin >> name >> age;

    // cout << "Hello " << name << " you are " << age << endl;

    // Data with spaces

    string name;
    int age{20};

    getline(cin, name);

    cout << "Hello " << name << " you are " << age << endl;

    return 0;
}