#include <iostream>
#include <set>
using namespace std;

int main() {
    int year;
    cin >> year;
    while(true) {
        year++;
        int temp = year;
        set<int> st;
        while(temp > 0) {
            st.insert(temp % 10);
            temp /= 10;
        }
        if(st.size() == 4) {
            cout << year;
            break;
        }
    }
    return 0;
}