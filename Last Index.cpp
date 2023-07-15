#include <iostream>
using namespace std;

int lastIndexOf(int arr[], int n, int m, int currentIndex) {
    
    if (currentIndex < 0)
        return -1;
    
    
    if (arr[currentIndex] == m)
        return currentIndex;
    
    
    return lastIndexOf(arr, n, m, currentIndex - 1);
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
    
    
    int lastIndex = lastIndexOf(arr, N, M, N - 1);
    
    cout << lastIndex << endl;
    
    return 0;
}
