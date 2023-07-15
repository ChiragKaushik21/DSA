#include <iostream>
#include <string>

using namespace std;

string compressString(const string& str) {
    int n = str.length();
    if (n <= 1) {
        return str;  
    }

    string compressed;
    int count = 1;

    for (int i = 1; i <= n; i++) {
        if (i == n || str[i] != str[i - 1]) {
            compressed += str[i - 1];
            if (count > 1) {
                compressed += to_string(count);
            }
            count = 1;
        } else {
            count++;
        }
    }

    return compressed;
}

int main() {
    string str;
    cin >> str;

    string compressed = compressString(str);
    cout << compressed << endl;

    return 0;
}
