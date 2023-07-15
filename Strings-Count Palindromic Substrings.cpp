#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string& str, int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int countPalindromicSubstrings(const string& str) {
    int count = 0;
    int n = str.length();

    
    for (int i = 0; i < n; i++) {
        
        int left = i;
        int right = i;
        while (left >= 0 && right < n && str[left] == str[right]) {
            count++;
            left--;
            right++;
        }

        
        left = i;
        right = i + 1;
        while (left >= 0 && right < n && str[left] == str[right]) {
            count++;
            left--;
            right++;
        }
    }

    return count;
}

int main() {
    string str;
    cin >> str;

    int count = countPalindromicSubstrings(str);
    cout << count << endl;

    return 0;
}
