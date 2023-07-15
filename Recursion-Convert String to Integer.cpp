#include <iostream>
using namespace std;

int stringToInt(string str, int n) {
    
    if (n == 0)
        return 0;
    
    
    int smallerInt = stringToInt(str, n - 1);
    
    
    int currentDigit = str[n - 1] - '0';
    int currentInt = smallerInt * 10 + currentDigit;
    
    return currentInt;
}

int main() {
    string str;
    cin >> str;
    
    int length = str.length();
    int number = stringToInt(str, length);
    
    cout << number << endl;
    
    return 0;
}
