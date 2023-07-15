#include <iostream>
#include <vector>

using namespace std;

int findMinimumElement(vector<int>& nums) {
    int n = nums.size();
    int left = 0;
    int right = n - 1;
    
   
    if (nums[left] <= nums[right]) {
        return nums[left];
    }
    
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        
        if (nums[mid] > nums[mid + 1]) {
            return nums[mid + 1];
        }
        
        
        if (nums[mid] >= nums[left]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    
    
    return nums[left];
}

int main() {
    int N;
    cin >> N;
    
    vector<int> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }
    
    int minimumElement = findMinimumElement(nums);
    cout << minimumElement << endl;
    
    return 0;
}
