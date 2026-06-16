#include <bits/stdc++.h>
using namespace std;

int main() {
    long long X, Y;
    cin >> X >> Y;
    long long prod= X*Y;

    if (prod>=0) {
        if (prod % 2 == 0)
            cout << "ALPHA"<<endl;
        else
            cout << "BETA"<<endl;
       }
    else {
        long long sum = abs(X) + abs(Y);

        if (sum % 3 == 0)
            cout << "GAMMA"<<endl;
        else
            cout << "DELTA"<<endl;
    }
    return 0;
}