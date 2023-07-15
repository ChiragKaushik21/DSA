#include <iostream>
#include <string>

using namespace std;

string insertAsciiDifference(const string& str) {
    int n = str.length();
    string modified;

    for (int i = 0; i < n - 1; i++) {
        modified += str[i];
        int diff = str[i + 1] - str[i];
        modified += to_string(diff);
    }

   
    modified += str[n - 1];

    return modified;
}

int main() {
    string str;
    cin >> str;

    string modified = insertAsciiDifference(str);
    cout << modified << endl;

    return 0;
}
