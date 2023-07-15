#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<int> luckyNumbers(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> minRows(m, INT_MAX);   
    vector<int> maxCols(n, INT_MIN);  

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            minRows[i] = min(minRows[i], matrix[i][j]);
            maxCols[j] = max(maxCols[j], matrix[i][j]);
        }
    }

    vector<int> luckyNums;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == minRows[i] && matrix[i][j] == maxCols[j]) {
                luckyNums.push_back(matrix[i][j]);
            }
        }
    }

    return luckyNums;
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

    vector<int> result = luckyNumbers(matrix);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
