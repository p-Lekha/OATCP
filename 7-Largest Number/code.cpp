#include<bits/stdc++.h>
using namespace std;
bool comp(string s1, string s2){
    return (s1+s2)<(s2+s1);
   }
int main(){
   string input;
   getline( std::cin, input );
   istringstream is( input );
   vector<int> nums( ( istream_iterator<int>( is ) ), istream_iterator<int>() );
     vector<string> temp;
        for(int num: nums){
            temp.push_back(to_string(num));
        }
        sort(temp.rbegin(), temp.rend(), comp);
        string res;
        for(string s: temp){
            res+=s;
        }
        cout<< (res[0]=='0'?"0": res)<<endl;
}
