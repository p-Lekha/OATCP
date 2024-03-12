#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
// Function to calculate the total number of ways to have sum N
int help(int N, int dp[])
{
	// Base Case
	if (N == 0) {
		return 1;
	}
	if (dp[N] != -1) {
		return dp[N];
	}

	int cnt = 0;

	// Recursion for all 6 states
	for (int i = 1; i <= 6; i++) {

		if (N - i >= 0) {
			cnt = (cnt + help(N - i, dp)%mod)%mod;
		}
	}

	// Return the result
	return dp[N] = cnt%mod;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
	int N ;
    cin>>N;

	// Initializing the dp array
	int dp[N + 1];

	memset(dp, -1, sizeof(dp));

	// Function Call
	cout << help(N, dp);

    }


}
