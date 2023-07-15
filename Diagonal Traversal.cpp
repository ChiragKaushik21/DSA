#include <iostream>
#include <vector>

using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();
    vector<int> diagonal;

    int row = 0, col = 0;
    int direction = 1; 
	
    while (row < m && col < n) {
        diagonal.push_back(matrix[row][col]);

        
        if (direction == 1) {
            if (col == n - 1) {
                row++;
                direction = -1;
            } else if (row == 0) {
                col++;
                direction = -1;
            } else {
                row--;
                col++;
            }
        }
        
        else {
            if (row == m - 1) {
                col++;
                direction = 1;
            } else if (col == 0) {
                row++;
                direction = 1;
            } else {
                row++;
                col--;
            }
        }
    }

    return diagonal;
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

    
    vector<int> diagonal = findDiagonalOrder(matrix);

    
    for (int i = 0; i < diagonal.size(); i++) {
        cout << diagonal[i] << " ";
    }
    cout << endl;

    return 0;
}
