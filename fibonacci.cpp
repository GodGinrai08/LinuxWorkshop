// fibonacci.cpp
#include <iostream>
#include <cstdlib>  // For std::atoi

int fibonacci(int n) {
    std::cout<<"HH";
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char* argv[]) {
    std::cout<<"hh";
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <n>" << std::endl;
        return 1; // Exit with error code
    }

    int n = std::atoi(argv[1]);  // Convert the command line argument to an integer
    std::cout << "Fibonacci number at position " << n << " is " << fibonacci(n) << std::endl;
    return 0;
}
