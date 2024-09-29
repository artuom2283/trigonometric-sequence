#include "funcA.h"
#include <cmath>

double FuncA::compute(double x, int n) {
    double result = x;
    result -= pow(x, 3) / 3;
    result += 2 * pow(x, 5) / 15;
    
    // Если n > 3, добавьте дальнейшие элементы
    if (n > 3) {
        // Добавьте дальнейшие элементы для n > 3
    }
    
    return result;
}
