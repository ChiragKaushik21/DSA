#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int findMaxHourglassSum(vector<vector<int>>& matrix) {
    int maxSum = INT_MIN;
    int rows = matrix.size();
    int columns = matrix[0].size();

    
    for (int i = 1; i < rows - 1; i++) {
        for (int j = 1; j < columns - 1; j++) {
            
            int sum = matrix[i][j] + matrix[i-1][j] + matrix[i+1][j] +
                      matrix[i-1][j-1] + matrix[i-1][j+1] +
                      matrix[i+1][j-1] + matrix[i+1][j+1];

           
            if (sum > maxSum) {
                maxSum = sum;
            }
        }
    }

    return maxSum;
}

int main() {
    int rows, columns;
    cin >> rows >> columns;

    vector<vector<int>> matrix(rows, vector<int>(columns));

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    int maxSum = findMaxHourglassSum(matrix);

    
    cout << maxSum << endl;

    return 0;
}
