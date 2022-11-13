/*______________________________________________________________________
||--------------------------------------------------------------------||
||                                                                    ||
|| "I bear witness that there is no god but Allah and I bear witness  ||
||    that Muhammad (peace be upon him) is the Messenger of Allah"    ||
||                                                                    ||
|| *** In the name of Allah, the Most Gracious, the Most Merciful.*** ||
||                                                                    ||
========================================================================
========================================================================
||                                                                    ||
|| --> Author     :     Abu Bakar Siddique Arman (#arman_bhaai)       ||
|| --> Email      :     arman.bhaai@gmail.com                         ||
|| --> Portfolio  :     arman-bhaai.github.io                         ||
|| --> LinkedIn   :     linkedin.com/in/abubakar-arman                ||
|| --> GitHub     :     github.com/arman-bhaai                        ||
|| --> Facebook   :     fb.me/arman.bhaai                             ||
|| --> StopStalk  :     stopstalk.com/user/profile/arman_bhaai        ||
|| --> Clist      :     clist.by/coder/arman_bhaai                    ||
|| --> CodeForces :     codeforces.com/profile/arman_bhaai            ||
|| --> CodeChef   :     codechef.com/users/arman_bhaai                ||
|| --> AtCoder    :     atcoder.jp/users/arman_bhaai                  ||
|| --> HackerRank :     hackerrank.com/arman_bhaai                    ||
|| --> LeetCode   :     leetcode.com/arman_bhaai                      ||
||____________________________________________________________________||
----------------------------------------------------------------------*/

// I believe in OpenSource. So, any of my code snippets are Copyright-Free.
// <3 Happy Coding <3

// Contest ID   :: NOV221D
// Problem Name :: String Game
// Problem URL  :: https://www.codechef.com/NOV221D/problems/ABSTRING

/*******************************************************************************
////////////////////////////////////////////////////////////////////////////////
*******************************************************************************/


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef string str;
typedef vector<int> vi;
typedef vector<ll> vii;
typedef vector<vector<ll>> vvi;
typedef map<int,int> mi;
typedef map<ll,ll> mii;

// shortcuts
#define endl '\n'
#define F first
#define S second
#define getv(v) for(auto &k:v) cin>>k;
#define all(v) v.begin(),v.end()
// debugging
#define couts(i) cout<<i<<" ";
#define coutn(i) cout<<i<<'\n';
#define showv(v) cout<<endl;for(auto &k:v) cout<<k<<", ";cout<<endl;
#define showm(m) cout<<endl;for(auto &k:m) cout<<k.F<<" -> "<<k.S<<endl;cout<<endl;

void optimize();
// void solve();


void solve(){
	int n; str s;
	cin>>n>>s;
	set<char> st;
	
	for(int i=0; i<n; i++){
		if(st.count(s[i])) st.erase(s[i]);
		else st.insert(s[i]);
	}
	cout<<((st.size())?"NO":"YES");
}

int main(){
	optimize();
	int __=1;
	cin>>__;
	for(int _=1; _<=__; _++){
		// cout<<"Case "<<_<<": ";
		solve(); cout<<endl;
	}
	return 0;
}


void optimize(){
	// fastIO
	ios::sync_with_stdio(0);
	cin.tie(0);
}

/* Alternatives
*/