#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> prefix(n);
    for(int i = 0; i < n; i++) {
        cin >> prefix[i];

        if(i > 0) {
            prefix[i] += prefix[i - 1];
        }
    }
    int m;
    cin >> m;
    while(m--) {
        int x;
        cin >> x;

        int pile = lower_bound(prefix.begin(), prefix.end(), x) - prefix.begin();

        cout << pile + 1 << "\n";
    }
    return 0;
}