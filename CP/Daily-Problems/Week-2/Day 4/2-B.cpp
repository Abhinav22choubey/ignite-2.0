#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin >> nums[i];
        }
        sort(nums.rbegin() , nums.rend());
        bool flag=true;
        for(int i=0;i+1<n;i++){
            if(nums[i] == nums[i+1]){
                cout << -1 << endl;
                flag=false;
                break;
            }
        }
        if (flag){
            for(int num: nums) cout << num << " ";
            cout << endl;
        }
    }
    return 0;
}
 
