#include<bits/stdc++.h>
using namespace std;
int main(){
      string input;
   getline( std::cin, input );
   istringstream is( input );
   vector<int> temp( ( istream_iterator<int>( is ) ), istream_iterator<int>() );

    
         vector<int> nums;
        for(int num: temp){
            nums.push_back(num);
        }
     int res=0;
        int n=nums.size();
        
        for(int bit_pos=0; bit_pos<32; bit_pos++){
            int set_bit_ctr=0;
            for(int i=0; i<n; i++){
                int bit= (nums[i]>>bit_pos)& 1;
                if(bit==1) set_bit_ctr++;
            }
            res+=set_bit_ctr*(n-set_bit_ctr);

        }
        cout<<res;
}
