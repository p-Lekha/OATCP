#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>> grid(n, vector<int>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>grid[i][j];
        }
    }
    vector<int> rows(n,0);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            rows[i]=rows[i]<<1;
            rows[i]=rows[i]|grid[i][j];
        }
    }
    int res=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
           int set_bits= __builtin_popcount(rows[i]& rows[j]);
           res+=(set_bits*(set_bits-1))/2;

        }
    }
    cout<<res;

}
