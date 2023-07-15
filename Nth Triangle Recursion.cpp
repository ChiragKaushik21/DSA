#include <iostream>
using namespace std;

int findTriangle(int n) {
    
    if (n == 1)
        return 1;

    
    return n + findTriangle(n - 1);
}

int main() {
    int N;
    cin >> N;

    int result = findTriangle(N);
    cout << result << endl;

    return 0;
}
