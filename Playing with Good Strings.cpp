#include <iostream>
#include <string>

using namespace std;

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int longestGoodSubstring(const string& str) {
    int n = str.length();
    int maxLength = 0;
    int currLength = 0;

    for (int i = 0; i < n; i++) {
        if (isVowel(tolower(str[i]))) {
            currLength++;
            maxLength = max(maxLength, currLength);
        } else {
            currLength = 0;
        }
    }

    return maxLength;
}

int main() {
    string str;
    cin >> str;

    int length = longestGoodSubstring(str);

    cout << length << endl;

    return 0;
}
