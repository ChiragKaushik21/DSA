#include <iostream>
#include <string>
#include <vector>

using namespace std;

int countAsciiSubsequences(string s, int i = 0, string curr = "") {
    if (i == s.length()) {
        return 1;
    }

    int count = 0;
    count += countAsciiSubsequences(s, i + 1, curr);
    count += countAsciiSubsequences(s, i + 1, curr + s[i]);
    count += countAsciiSubsequences(s, i + 1, curr + to_string((int)s[i]));

    return count;
}

void printAsciiSubsequences(string s, int i = 0, string curr = "") {
    if (i == s.length()) {
        cout << curr << " ";
        return;
    }

    printAsciiSubsequences(s, i + 1, curr);
    printAsciiSubsequences(s, i + 1, curr + s[i]);
    printAsciiSubsequences(s, i + 1, curr + to_string((int)s[i]));
}

int main() {
    string s;
    cin >> s;

    
    printAsciiSubsequences(s);
    cout << endl;

    int count = countAsciiSubsequences(s);
    cout  << count << endl;

    return 0;
}
