#include <iostream>
#include <sstream>

void merge(int * arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int * lArr = new int[n1];
    int * rArr = new int[n2];

    for (int i = 0; i < n1; i ++) {
        lArr[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j ++) {
        rArr[j] = arr[m + 1 + j];
    }

    int i = 0, j = 0, k = l;

    while (i < n1 && j < n2) {
        if (lArr[i] <= rArr[j]) {
            arr[k] = lArr[i];
            i ++;
        } else {
            arr[k] = rArr[j];
            j ++;
        }
        k ++;
    }

    while (i < n1) {
        arr[k] = lArr[i];
        i ++;
        k ++;
    }

    while (j < n2) {
        arr[k] = rArr[j];
        j ++;
        k ++;
    }

    delete[] lArr;
    delete[] rArr;
}

void mergeSort(int * arr, int l, int r) {
    if (l >= r) {
        return;
    }
    int m = l + (r - l) / 2;
    mergeSort(arr, l, m);
    mergeSort(arr, m + 1, r);
    merge(arr, l, m, r);
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
        mergeSort(arr, 0, count);
        std::cout << "Sorted array: " << std::endl;
        for (i = 0; i <= count; i ++) {
            std::cout << arr[i] << ' ';
        }
        std::cout << std::endl;
        delete[] arr;
    }
}
