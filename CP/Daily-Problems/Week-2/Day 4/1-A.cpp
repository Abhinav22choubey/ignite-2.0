#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    long long sum=0;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
        sum += nums[i];
    }
    sort( nums.begin(),nums.end() );
    long long curr = 0;
    int ans = 0;
    for(int i = n-1; i >= 0; i--){
        curr += nums[i];
        ans++;
        if(curr*2 > sum) break;
    }
    cout << ans << endl;
    return 0;
}
