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

char c='c',v='v',i='i',x='x',l='l';
map<char,int> mp;
void convert(int k){
	for(;k>=100;k-=100){
		mp[c]++;
	}
	for(;k>=90;k-=90){
		mp[c]++;
		mp[x]++;
	}
	for(;k>=50;k-=50){
		mp[l]++;
	}
	for(;k>=40;k-=40){
		mp[l]++;
		mp[x]++;
	}
	for(;k>=10;k-=10){
		mp[x]++;
	}
	for(;k>=9;k-=9){
		mp[x]++;
		mp[i]++;
	}
	for(;k>=5;k-=5){
		mp[v]++;
	}
	for(;k>=4;k-=4){
		mp[v]++;
		mp[i]++;
	}
	for(;k>=1;--k){
		mp[i]++;
	}
}

void solution(){
	cin >> n;
	for(int j=1;j<=n;++j){
		convert(j);
	}
	cout << mp[i] << space << mp[v] << space << mp[x] <<space << mp[l] << space << mp[c] ;
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
