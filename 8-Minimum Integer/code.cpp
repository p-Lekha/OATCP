#include<bits/stdc++.h>
using namespace std;
int main(){
    string num;
    int k;
    cin>>num;
    cin>>k;
   int n = num.size();
stack<char> st;
for(char c: num)
{
    while(!st.empty() && k > 0 && st.top() > c)
    {   
        st.pop();      
        k -= 1;   
    }
            
    if(!st.empty() || c != '0')
        st.push(c);
}

while(!st.empty() && k--)
    st.pop();
if(st.empty()){
cout<<"0"<<endl;
    return 0;}

while(!st.empty())
{
    num[n-1] = st.top();
    st.pop();
    n -= 1;
}
cout<<num.substr(n)<<endl;
    return 0;


    }
