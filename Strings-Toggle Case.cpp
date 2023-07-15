#include <iostream>
#include <string>

using namespace std;

string toggleCase(const string& str) {
    string toggledStr = str;
    int n = str.length();

    for (int i = 0; i < n; i++) {
        if (islower(str[i])) {
            toggledStr[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            toggledStr[i] = tolower(str[i]);
        }
    }

    return toggledStr;
}

int main() {
    string str;
    cin >> str;

    string toggledStr = toggleCase(str);

    cout << toggledStr << endl;

    return 0;
}
