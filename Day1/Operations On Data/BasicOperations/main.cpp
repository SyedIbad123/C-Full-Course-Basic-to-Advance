#include <iostream>
using namespace std;

int main()
{

    int n1{1};
    int n2{2};
    int n3(3);
    int sum{n1 + n2 + n3};
    int diff = n1 - n2 - n3;
    int mul = n1 * n2 * n3;
    int div = n1 / n2;
    int mod = n1 % n2;
    cout << sum << endl;
    cout << diff << endl;
    cout << mul << endl;
    cout << div << endl;
    cout << mod << endl;
    return 0;
}