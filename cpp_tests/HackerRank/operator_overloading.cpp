#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Matrix {
private:
    int width;
    int height;
public:
    Matrix() = default;
    Matrix(int w, int h): width(w), height(h) {
        a.resize(width, vector<int>(height));
    }
    vector<vector<int>> a;
    Matrix operator+(Matrix& other) {
        Matrix result = Matrix(this->a.size(), this->a[0].size());
        for (int i = 0; i < this->a.size(); i ++) {
            for (int j = 0; j < this->a[0].size(); j ++) {
                result.a[i][j] = this->a[i][j] + other.a[i][j];
            }
        }
        return result;
    }
};

int main () {
    int cases,k;
    cin >> cases;
    for(k=0;k<cases;k++) {
        Matrix x;
        Matrix y;
        Matrix result;
        int n,m,i,j;
        cin >> n >> m;
        for(i=0;i<n;i++) {
            vector<int> b;
            int num;
            for(j=0;j<m;j++) {
                cin >> num;
                b.push_back(num);
            }
            x.a.push_back(b);
        }
        for(i=0;i<n;i++) {
            vector<int> b;
            int num;
            for(j=0;j<m;j++) {
                cin >> num;
                b.push_back(num);
            }
            y.a.push_back(b);
        }
        result = x+y;
        for(i=0;i<n;i++) {
            for(j=0;j<m;j++) {
                cout << result.a[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
