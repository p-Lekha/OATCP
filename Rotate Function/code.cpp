 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
       cin>> nums[i];
    }
     int sum=0;
        int f=0;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            f+=i*nums[i];
        }
        int res=f;
        for(int i= n-1; i>0; i--){
            f=f+sum-(n* nums[i]);
            res=max(f,res);

        }
        cout<<res;
 }
