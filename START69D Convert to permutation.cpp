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

// Contest ID   :: START69D
// Problem Name :: Convert to permutation
// Problem URL  :: https://www.codechef.com/START69D/problems/PERMUTATION

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
#define el '\n'
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
	int n; cin>>n;
	int cnt_mx=0, sm=0;
	vi v(n); getv(v);

	sort(v.rbegin(), v.rend());
	for(int i=0; i<n; i++){
		if(i==0){
			if(v[i]<n){
				sm += n-v[i];
				v[i]=n;
			}
			continue;
		}
		// showv(v)
		if(v[i]<v[i-1]){
			sm += v[i-1]-1-v[i];
			v[i]= v[i-1]-1;
			// cout<<9;
		} else {
			// showv(v)
			cout<<-1; return;
		}
	}
	cout<<sm;

}

int main(){
	optimize();
	int __=1;
	cin>>__;
	for(int _=1; _<=__; _++){
		// cout<<"Case "<<_<<": ";
		solve(); cout<<el;
	}
	return 0;
}


void optimize(){
	// fastIO
	ios::sync_with_stdio(0);
	cin.tie(0);
}

/* Alternatives
void solve(){
	int n; cin>>n;
	vi v(n); getv(v);
	int min_cost=0;

	sort(all(v));

	for(int i=1; i<=n; i++){
		if(v[i-1]>i){
			cout<<-1; return;
		}
		min_cost += i-v[i-1];
	}
	cout<<min_cost;
	// showv(v)
}
*/	