#include <iostream>
using namespace std;

int firstIndexOf(int arr[], int n, int m, int currentIndex) {
    
    if (currentIndex >= n)
        return -1;
    
    
    if (arr[currentIndex] == m)
        return currentIndex;
    
    
    return firstIndexOf(arr, n, m, currentIndex + 1);
}

int main() {
    int N;
    cin >> N;
    
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    int M;
    cin >> M;
    
    
    int firstIndex = firstIndexOf(arr, N, M, 0);
    
    cout << firstIndex << endl;
    
    return 0;
}
