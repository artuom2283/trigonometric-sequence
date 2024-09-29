#include "funcA.h"
#include <cmath>

// Функция вычисляет сумму первых n элементов последовательности
double FuncA::compute(double x, int n) {
    double result = x;
    result -= pow(x, 3) / 3;
    result += 2 * pow(x, 5) / 15;
    // Добавьте дальнейшие элементы в зависимости от n
    return result;
}
