#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    string name;

    cout << "please type your name and age" << endl;

    cin >> name;
    cin >> age;

    cout << "Hello " << name << " you are " << age << endl;

    return 0;
}