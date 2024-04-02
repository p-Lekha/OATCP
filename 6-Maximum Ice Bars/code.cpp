#include<bits/stdc++.h>
using namespace std;
   int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int sum=0;
        if(coins<costs[0]) return 0;
        for(int i=0; i<costs.size(); i++){
            sum+=costs[i];
            if(sum>coins) return i;
        }
        return costs.size();
        
    }
int main(){
    int n;
    cin>>n;
    vector<int> costs(n);
    for(int i=0; i<n; i++){
        cin>>costs[i];
    }
    int coins;
    cin>>coins;
    cout<<maxIceCream(costs, coins);
}
