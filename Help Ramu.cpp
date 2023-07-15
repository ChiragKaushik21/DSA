#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minimumCost(int c1, int c2, int c3, int c4, int n, int m, vector<int>& rickshaws, vector<int>& cabs) {
    int rickshawCost = 0;
    int cabCost = 0;

    
    for (int i = 0; i < n; i++) {
        rickshawCost += min(rickshaws[i] * c1, c2);
    }
    rickshawCost = min(rickshawCost, c3);  


    for (int i = 0; i < m; i++) {
        cabCost += min(cabs[i] * c1, c2);
    }
    cabCost = min(cabCost, c3);  

    int totalCost = min(rickshawCost + cabCost, c4);  

    return totalCost;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int c1, c2, c3, c4;
        cin >> c1 >> c2 >> c3 >> c4;

        int n, m;
        cin >> n >> m;

        vector<int> rickshaws(n);
        for (int i = 0; i < n; i++) {
            cin >> rickshaws[i];
        }

        vector<int> cabs(m);
        for (int i = 0; i < m; i++) {
            cin >> cabs[i];
        }

        int result = minimumCost(c1, c2, c3, c4, n, m, rickshaws, cabs);
        cout << result << endl;
    }

    return 0;
}
