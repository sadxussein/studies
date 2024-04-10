#include <iostream>
#include <vector>
#include <algorithm>

size_t sort(int separator, std::vector<int> & values) {
    size_t left = 0;
    size_t right = values.size() - 1;
    size_t result = -1;
    while (left <= right && result == -1) {
        size_t middle = left + (right - left) / 2;
        if (separator > values[middle]) {
            left = middle + 1;
        } else if (separator < values[middle]) {
            right = middle - 1;
        } else {
            result = middle;
        }
    }

    if (result != -1) {
        while (result < values.size() - 1 && values[result] == values[result + 1]) {
            result ++;
        }
    }

    if (result != -1) {
        return values.size() - result - 1;
    } else {
        return values.size() - right - 1;
    }
}

int main() {
    std::cout << "Enter values separated by spaces: ";
    std::vector<int> values;
    int value;
    while (std::cin >> value) {
        values.push_back(value);
        if (std::cin.peek() == '\n') {
            break;
        }
    }
    std::sort(values.begin(), values.end());
    std::cout << "Enter separation point: ";
    int separator;
    std::cin >> separator;
    std::cout << "Number of elements, greater than " << separator << " is " << sort(separator, values) << '.' << std::endl;
    return 0;
}