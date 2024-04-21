#include <iostream>
#include <sstream>

int getPivot(int * arr, int l, int r) {
    int p = l + (r - l) / 2;
    while (true) {
        while (arr[l] < arr[p]) {
            l ++;
        }
        while (arr[r] > arr[p]) {
            r --;
        }
        if (l >= r) {
            return r;
        }
        std::swap(arr[l ++], arr[r --]);
    }
}

void quickSort(int * arr, int l, int r) {
    if (l >= r) {
        return;
    }
    int p = getPivot(arr, l, r);
    quickSort(arr, l, p);
    quickSort(arr, p + 1, r);
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
        std::cout << "Unsorted array: " << std::endl;
        for (i = 0; i <= count; i ++) {
            std::cout << arr[i] << ' ';
        }
        std::cout << std::endl;
        quickSort(arr, 0, count);
        std::cout << "Sorted array: " << std::endl;
        for (i = 0; i <= count; i ++) {
            std::cout << arr[i] << ' ';
        }
        std::cout << std::endl;
        delete[] arr;
    }
}
