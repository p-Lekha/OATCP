 #include<bits/stdc++.h>
 typedef long long ll;
 using namespace std;
 const int mod=1e9+7;
 int main(){
    int n;
    cin>>n;
    vector<ll> nums(n);
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
     ll l=1, r=1;
        ll res=INT_MIN;
        for(int i=0; i<n; i++){
            if(l==0) l=1;
            if(r==0) r=1;
            l=(l*nums[i])%mod;
            r=(r*nums[n-i-1])%mod;
            res=max(res, max(l, r));
        }
        if(res==INT_MIN) cout<<0;
        else
        cout<<res%mod;
 }
