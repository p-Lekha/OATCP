#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int help(int i, int j, int r, int c, vector<vector<char> >& A, vector<vector<int> >& dp)
{
	// boundary condition 
	if (i == r || j == c) {
		return 0;
	}

	if (A[i][j] == '*') {
		return 0;
	}
	if (i == r - 1 && j == c - 1) {
		return 1;
	}

	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	return dp[i][j]= (help(i + 1, j, r, c, A, dp)%mod+ help(i, j + 1, r, c, A, dp)%mod)%mod;
}

int solution(vector<vector<char> >& A)
{

	int r = A.size(), c = A[0].size();

	// create a 2D-matrix and initializing  with value -1

	vector<vector<int> > dp(r, vector<int>(c, -1));

	return (help(0, 0, r, c, A, dp))%mod;
}
int main()
{
	int n;
    cin>>n;

    vector<vector<char>> A (n, vector<char>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>A[i][j];
        }
    }


	cout << solution(A) << " \n";
}
