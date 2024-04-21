#include <iostream>

// Сложность такого алгоритма по времени - n^2, так как на каждый вызов функции приходится два рекурсивных вызова
// Сложность по памяти - n, так как каждый вызов требует только одной переменной n.
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    std::cout << "Input Fibonacci element number: ";
    std::cin >> n;
    std::cout << "Fibonacci element with number " << n << " equals " << fibonacci(n) << std::endl;
    return 0;
}
