#include <bits/stdc++.h>
using namespace std;

vector<string> genSubsequences(const string &str, string current, int index, int length) {
    vector<string> result;

    if (length == 0) {
        result.push_back(current);
        return result;
    }

    if (index == str.length()) {
        return result;
    }

    vector<string> withCurrent = genSubsequences(str, current + str[index], index + 1, length - 1);
    result.insert(result.end(), withCurrent.begin(), withCurrent.end());

    vector<string> withoutCurrent = genSubsequences(str, current, index + 1, length);
    result.insert(result.end(), withoutCurrent.begin(), withoutCurrent.end());

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<vector<string>> vs;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        vector<string> ans;
        set<string> st;

        for (int i = 1; i <= 4; ++i) {
            vector<string> subs = genSubsequences(s, "", 0, i);
            for (int j = 0; j < subs.size(); j++) {
                if (st.find(subs[j]) == st.end()) {
                    ans.push_back(subs[j]);
                    st.insert(subs[j]);
                }
            }
        }
        vs.push_back(ans);
    }

    for (int l = 0; l < vs.size(); l++) {
        for (int j = 0; j < vs[l].size(); j++) {
            cout << vs[l][j] << endl;
        }
    }

    return 0;
}
