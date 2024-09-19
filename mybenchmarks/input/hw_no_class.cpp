#include <iostream>  // Include the standard I/O library

void DataCorruption_Handler()
{
    while(1);
}
void SigMismatch_Handler()
{
    while(1);
}

void foo(int a){
    std::cout << a << std::endl;  
}

void foo(double a){
    std::cout << a << std::endl;  
}

int main() {
    DataCorruption_Handler();
    std::cout << "Hello, World!" << std::endl;  
    return 0;  
}
