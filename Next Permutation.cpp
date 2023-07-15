#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void nextPermutation(vector<int>& arr) {
    int n = arr.size();

    
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    
    if (i < 0) {
        reverse(arr.begin(), arr.end());
        return;
    }

    
    int j = n - 1;
    while (arr[j] <= arr[i]) {
        j--;
    }

    
    swap(arr[i], arr[j]);

    
    reverse(arr.begin() + i + 1, arr.end());
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        nextPermutation(arr);

        for (int i = 0; i < N; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
