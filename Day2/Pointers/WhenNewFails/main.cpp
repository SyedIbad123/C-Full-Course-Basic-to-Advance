#include <iostream> 
using namespace std;


int main(){


    // int* data = new int[1000000000000000000];
    // cout << data << endl;


    // try
    // {
    //     int* data = new int[1000000000000000000];
    // }
    // catch(const exception& e)
    // {
    //     cerr << e.what() << '\n';
    // } 
    

    //std::nothrow
    for(size_t i{0} ; i < 100 ; ++i){
   
        int * data = new(std::nothrow) int[1000000000];

        if(data!=nullptr){
            std::cout << "Data allocated" << std::endl;
        }else{
            std::cout << "Data allocation failed" << std::endl;
        }
       
    }


    std::cout << "Program ending well" << std::endl;
    




    return 0;
}