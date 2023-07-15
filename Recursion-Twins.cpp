#include <iostream>
#include <string>

using namespace std;

int countTwins(string str, int index = 0) {
    if (index >= str.length() - 2) {
        return 0;
    }

    int count = 0;

    if (str[index] == str[index + 2]) {
        count++;
    }

    count += countTwins(str, index + 1);

    return count;
}

int main() {
    string str;
    cin >> str;

    int twinCount = countTwins(str);
    cout << twinCount << endl;

    return 0;
}
