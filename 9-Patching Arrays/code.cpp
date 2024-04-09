#include<bits/stdc++.h>
using namespace std;
int main(){
    string input;
    getline( std::cin, input );
    istringstream is( input );
    vector<int> nums( ( istream_iterator<int>( is ) ), istream_iterator<int>() );
    int n;
    cin>>n;
  
    int n2 = nums.size();
    long long j = 0; 
    int res = 0; 
    for(int i = 0; i < n2; i++){
        while(nums[i] > (j + 1)){
            j = 2 * j + 1;
            res++;
            if(j >= n){
                cout<<res<<endl;
                return 0;
            }
        }
        j += nums[i];
        if(j >= n){
            cout<<res<<endl;
                return 0;
        }
    }
    while(j < n){
        j = 2 * j + 1;
        res++;
    }
    cout<<res<<endl;
    return 0;
}
