#include <iostream>  // Include the standard I/O library

// Define a simple class
class HelloWorld {
public:
    // Constructor
    HelloWorld() {}

    // Method to print "Hello, World!"
    void printMessage() {
        std::cout << "Hello, World!" << std::endl;
    }
};

int main() {
    // Create an instance of the HelloWorld class
    HelloWorld hello;

    // Call the method to print the message
    hello.printMessage();

    return 0;  // Return 0 to indicate successful execution
}
