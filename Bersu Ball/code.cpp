#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> boys(n);
    for(int i=0; i<n; i++){
        cin>>boys[i];
    }
    int m;
    cin>>m;
     vector<int> girls(m);
    for(int i=0; i<m; i++){
        cin>>girls[i];
    }
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    vector<vector<int>> dp(n, vector<int>(m, 0));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
           
            if(i>0 && j>0){
                dp[i][j]=max(dp[i][j], dp[i-1][j-1]);
            }
             if(abs(boys[i]-girls[j])<=1) dp[i][j]++;
            if(i>0) dp[i][j]=max(dp[i][j], dp[i-1][j]);
            if(j>0) dp[i][j]=max(dp[i][j], dp[i][j-1]);
        }
    }
    if(n>0 && m>0)
    cout<<dp[n-1][m-1];
    else cout<<0;
}
