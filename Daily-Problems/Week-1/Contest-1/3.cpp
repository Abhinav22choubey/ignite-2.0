#include <bits/stdc++.h>
using namespace std;

#define ll long long   //macros

int main() {
    int N;
    cin >> N;

    vector<ll> st;

    for (int i = 0; i < N; i++) {
        ll x;
        cin >> x;

       bool isEmpty = st.empty();
       int  topElement = st.back();

        if (!isEmpty && (topElement % 2) == (x % 2))
            st.pop_back();
        else
            st.push_back(x);
    }

    if (st.empty()) {
        cout << "EMPTY"<<endl;
        return 0;
    }

    for (ll x : st)
        cout << x << " ";

    return 0;
}


   // Alternate Solution using Stack 

 /*

   #include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    stack<ll> st;

    for (int i = 0; i < N; i++) {
        long long x;
        cin >> x;

        bool isEmpty = st.empty();
       int  topElement = st.top();

        if (!isEmpty && (topElement % 2 == x % 2))
            st.pop();
        else
            st.push(x);
    }

    if (st.empty()) {
        cout << "EMPTY\n";
        return 0;
    }

    vector<ll> ans;

    while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(), ans.end());

    for (ll x : ans)
        cout << x << " ";

    cout << '\n';

    return 0;
}

    */