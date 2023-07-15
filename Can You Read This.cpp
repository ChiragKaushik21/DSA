#include <iostream>
#include <string>

using namespace std;

void extractWords(string& str) {
    int n = str.length();
    string word;

    
    for (int i = 0; i < n; i++) {
       
        if (isupper(str[i]) && i != 0) {
            cout << word << endl;
            word = "";
        }
        word += str[i];
    }

    cout << word << endl;
}

int main() {
    string str;
    cin >> str;

    extractWords(str);

    return 0;
}
