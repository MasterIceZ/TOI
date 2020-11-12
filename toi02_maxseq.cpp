#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define space " "
#define int long long
#define double long double
#define sim template<typename T
#define fi first
#define se second

#define pii pair<int,int>
#define pb push_back
#define sz(x) (int)(x).size()
#define all(x) (x).begin(),(x).end()
#define ub upper_bound
#define lb lower_bound
#define dec(_) cout << fixed << setprecision(_)
#define EACH(a) for(auto x : (a))

sim>void __test(vector<T>v){
	for(auto x : v){
		cout << x << " ";
	}
	cout << endl;
}
sim>vector<T> dp_qs(vector<T>dp,size_t nax){
	for(int i=1;i<=nax;++i){
		dp[i] += dp[i-1];
	}
	return dp;
}

int gcd(int a,int b){
	if(a==0){
		return b;
	} 
	if(b==0){
		return a;
	} 
	return gcd(b%a,b);
}
int lcm(int a,int b){
	return a*b/gcd(a,b);
}
string reverse(string s){
	int n = s.size(),cnt=0; 
	string rev = s; 
	for(int i=n-1;i>=0;--i){
		rev[cnt++] = s[i];
	}
   	return rev;
}
void writeCase(int _){
	cout << "Case #" <<  _ << ": \n"; 
}
typedef long long ll;
bool __Q=0;
bool __writecase=0;
int n,m;
const int INF = 2e18;

void solution(){
	bool c = false;
	cin >> n;
	vector<int>v(n);
	for(int i=0;i<n;++i){
		cin >> v[i];
	}	
	for(int i=0;i<n;++i){
		if(v[i]>0){
			c = true;
		}
	}
	if(!c){
		cout << "Empty sequence" << endl;
		return ;
	}
	int st,ed,t,nax,b,s;
	nax = -INF;
	st = ed = t = b = s = 0;
	for(int i=0;i<n;++i){
		t += v[i];
		if(t > nax){
			st = s;
			ed = i;
			nax = t;
		}
		if(t<0){
			s = i+1;
			t = 0;
		}
	}
	for(int i=st;i<=ed;++i){
		cout << v[i] << space ;
	}
	cout << endl << nax ;
	return ;
}

int32_t main (){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T=1;
	int _____=0;
	if(__Q){
		cin >> T;
	}
	do{
		if(__writecase){
			writeCase(_____++);
		}
		solution();	
		cout << '\n';
	}while(--T);
	return 0;
}
