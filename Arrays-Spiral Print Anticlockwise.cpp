#include <iostream>
#include <vector>

using namespace std;

void printSpiralAntiClockwise(vector<vector<int>>& matrix, int m, int n) {
    int rowStart = 0, rowEnd = m - 1;
    int colStart = 0, colEnd = n - 1;

    while (rowStart <= rowEnd && colStart <= colEnd) {
        
        for (int i = rowStart; i <= rowEnd; i++) {
            cout << matrix[i][colStart] << ", ";
        }
        colStart++;

       
        for (int i = colStart; i <= colEnd; i++) {
            cout << matrix[rowEnd][i] << ", ";
        }
        rowEnd--;

        
        if (colStart <= colEnd) {
            for (int i = rowEnd; i >= rowStart; i--) {
                cout << matrix[i][colEnd] << ", ";
            }
            colEnd--;
        }

        if (rowStart <= rowEnd) {
            for (int i = colEnd; i >= colStart; i--) {
                cout << matrix[rowStart][i] << ", ";
            }
            rowStart++;
        }
    }

    cout << "END" << endl;
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

    printSpiralAntiClockwise(matrix, m, n);

    return 0;
}
