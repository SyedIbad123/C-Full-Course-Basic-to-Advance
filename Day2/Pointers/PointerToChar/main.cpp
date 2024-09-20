#include <iostream>
using namespace std;

int main(){

    const char* message {"hello world!"};
    cout<<"message : " << message <<endl;


    //*message = "B"; // Compiler error
    std::cout << "*message : " << *message << std::endl;

    //Allow users to modify the string
    char message1[] {"Hello World!"};
    message1[0] = 'B';
    std::cout << "message1 : " << message1 << std::endl;
    




    return 0;
}