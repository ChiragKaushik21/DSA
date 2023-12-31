#include <iostream>
#include <vector>

using namespace std;

bool isToeplitzMatrix(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (matrix[i][j] != matrix[i + 1][j + 1]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    
    bool isToeplitz = isToeplitzMatrix(matrix);

    
    if (isToeplitz) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
