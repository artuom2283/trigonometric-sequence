#include "funcA.h"
#include <cmath>

double FuncA::compute(double x) {
    double result = x;
    result -= pow(x, 3) / 3;
    result += 2 * pow(x, 5) / 15;
    return result; 
}
