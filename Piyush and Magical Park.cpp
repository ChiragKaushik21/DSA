#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M, K, S;
    cin >> N >> M >> K >> S;

    vector<vector<char>> park(N, vector<char>(M));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> park[i][j];
        }
    }

    bool canEscape = true;
    int strength = S;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (park[i][j] == '.') {
                strength -= 2;
            } else if (park[i][j] == '*') {
                strength += 5;
            } else if (park[i][j] == '#') {
                break; 
            }

            if (j < M - 1) {
                strength--;
            }

            if (strength < K) {
                canEscape = false;
                break;
            }
        }

        if (!canEscape) {
            break;
        }
    }

    if (canEscape) {
        cout << "Yes" << endl;
        cout << strength << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
