#include <iostream>
using namespace std;

int addNum(int first_num, int second_num)
{

    int result = first_num + second_num;
    return result;
}

int mulNum(int first_num, int second_num)
{
    int result = first_num * second_num;
    return result;
}

int main()
{

    int first_num{3}; // we can declare statements like this also (recommended)
    int second_num{7};
    int sum{first_num + second_num};
    cout << sum << endl;

    sum = addNum(25, 9);
    cout << sum << endl;
    cout << addNum(20, 20) << endl;

    int mul = mulNum(2, 2);
    cout << mul << endl;

    cerr << "Error printing results" << endl; // prinitng error

    clog << "log messages" << endl; // printing log messages
    return 0;
}