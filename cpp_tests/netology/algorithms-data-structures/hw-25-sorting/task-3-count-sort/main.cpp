#include <iostream>
#include <sstream>

void countSort(int * arr, int size, int max) {
    int * countArr = new int[max + 1];
    for (int i = 0; i <= max; i ++) {
        countArr[i] = 0;
    }
    for (int i = 0; i <= size; i ++) {
        countArr[arr[i]] ++;
    }

    int offset = 0;
    for (int i = 0; i <= max; i ++) {
        if (countArr[i] > 0) {
            for (int j = 0; j < countArr[i]; j ++) {
                arr[offset] = i;
                offset ++;
            }
        }
    }
}

int main() {
    while (true) {
        std::cout << "Input array (Ctrl + C to exit): ";
        std::string line;
        getline (std::cin, line);
        int count = 0;
        for (char c : line) {
            if (c == ' ') {
                count ++;
            }
        }
        int * arr = new int[count];
        std::istringstream iss(line);
        int num;
        int i = 0;
        while (iss >> num) {
            arr[i] = num;
            i ++;
        }
        countSort(arr, count, 24);
        std::cout << "Sorted array: " << std::endl;
        for (i = 0; i <= count; i ++) {
            std::cout << arr[i] << ' ';
        }
        std::cout << std::endl;
        delete[] arr;
    }
}
