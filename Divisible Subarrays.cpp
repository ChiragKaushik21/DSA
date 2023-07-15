#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

long long countGoodSubArrays(vector<int>& arr) {
    int n = arr.size();
    unordered_map<long long, int> freq;
    long long sum = 0;
    long long count = 0;

    freq[0] = 1; 

    for (int i = 0; i < n; i++) {
        sum += arr[i];
        long long remainder = (sum % n + n) % n; 

        if (freq.count(remainder)) {
            count += freq[remainder];
        }

        freq[remainder]++;
    }

    return count;
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

        long long result = countGoodSubArrays(arr);
        cout << result << endl;
    }

    return 0;
}
