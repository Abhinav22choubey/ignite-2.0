#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
    int n;
    cin >> n;
    unordered_map<string, int> freq;
    while(n--) {
        string team;
        cin >> team;
        freq[team]++;
    }
    string winner;
    int mx = 0;
    for(auto it : freq) {
        if(it.second > mx) {
            mx = it.second;
            winner = it.first;
        }
    }
    cout << winner;
    return 0;
}