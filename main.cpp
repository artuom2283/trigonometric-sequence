#include <iostream>
#include "funcA.h"

int main() {
    FuncA func;
    double x = 0.5; // Example value
    int n = 3;      // Number of terms to sum
    
    double result = func.compute(x, n);
    
    std::cout << "The result of th(" << x << ") calculated using the first " << n << " terms is: " << result << std::endl;
    return 0;
}
