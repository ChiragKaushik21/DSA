#include <iostream>
#include <vector>
using namespace std;

void findIndices(vector<int>& arr, int n, int m, int idx, vector<int>& indices) {
    
    if (idx == n)
        return;
    
    
    if (arr[idx] == m)
        indices.push_back(idx);
    
    
    findIndices(arr, n, m, idx + 1, indices);
}

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    int m;
    cin >> m;
    
    vector<int> indices;
    findIndices(arr, n, m, 0, indices);
    
    for (int i = 0; i < indices.size(); i++)
        cout << indices[i] << " ";
    
    return 0;
}
