#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> shiftMatrix(vector<vector<int>>& matrix, int k) {
    int n = matrix.size();

    // Apply shifting operation to each row
    for (int i = 0; i < n; i++) {
        vector<int>& row = matrix[i];
        vector<int> shiftedRow(n);

        // Perform shifting operation on the row
        for (int j = 0; j < n; j++) {
            int newIndex = (j + k) % n;
            if (newIndex < 0)
                newIndex += n;
            shiftedRow[newIndex] = row[j];
        }

        matrix[i] = shiftedRow;
    }

    return matrix;
}

int main() {
    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    // Input the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int k;
    cin >> k;

    vector<vector<int>> shiftedMatrix = shiftMatrix(matrix, k);

    // Output the shifted matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << shiftedMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
