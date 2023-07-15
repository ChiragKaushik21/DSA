#include <iostream>
#include <vector>

using namespace std;

vector<int> removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    vector<int> result;
    
    if (n == 0) {
        return result;
    }
    
    result.push_back(nums[0]);
    
    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[i - 1]) {
            result.push_back(nums[i]);
        }
    }
    
    return result;
}

int main() {
    int N;
    cin >> N;
    
    vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    
    vector<int> result = removeDuplicates(nums);
    
    int length = result.size();
    cout << length << endl;
    
    for (int i = 0; i < length; i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}
