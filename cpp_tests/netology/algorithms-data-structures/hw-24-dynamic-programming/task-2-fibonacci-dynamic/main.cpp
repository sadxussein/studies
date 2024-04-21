#include <iostream>
#include <vector>

int fibonacci(int n) {
    std::vector<int> fibonacci(n + 1);
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    for (int i = 2; i <= n; ++i) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    return fibonacci[n];
}

int main() {
    int n;
    std::cout << "Input Fibonacci element number: ";
    std::cin >> n;
    std::cout << "Fibonacci element with number " << n << " equals " << fibonacci(n) << std::endl;
    return 0;
}
