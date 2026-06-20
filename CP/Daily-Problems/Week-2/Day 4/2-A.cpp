#include<iostream>
#include<vector>
#include<algorithm>
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
        sort(nums.begin(),nums.end());
        int ans=0,mid=nums[n/2];
        int low=0,high=n-1;
        while(low<high){
            if(nums[low]!=mid || nums[high]!=mid) ans++;
            low++;
            high--;
        }
        cout << ans << endl;
    }
    return 0;
}   
