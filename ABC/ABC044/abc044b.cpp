#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <queue>

#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <functional>

#include <unordered_map>

using namespace std;
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define INF 1<<29
#define ALEN(ARR) (sizeof(ARR) / sizeof((ARR)[0]))
#define MP make_pair
#define mp make_pair
#define pb push_back
#define PB push_back
#define _DEBUG(x) cout<<#x<<": "<<x<<endl
#define _DDEBUG(x,y) cout<<#x<<": "<<x<<", "<<#y<<": "<<y<<endl
#define ll long long
#define ull unsigned long long
#define MOD 1000000007

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout.precision(16);

    map<char, int> mp;
    string line;
    cin >> line;

    for(int i = 0; i < line.length(); i++) {
        char c = line.at(i);
        mp[c] = mp.find(c) != mp.end() ? mp[c] + 1 : 1;
    }

#if DEBUG
    cout << "** RESULT **" << endl; // debug
#endif
    for(auto elem : mp) {
        if(elem.second % 2 != 0) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
