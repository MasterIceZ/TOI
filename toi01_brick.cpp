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

int row,col;
bool ch;
vector<vector<char>>v(25,vector<char>(25));
vector<int>w(25);
void play(int i,int j,int st){
	i--;
	st--;
	ch = true;
	if(st<0){
		return ;
	}
	if(i<0){
		return ;
	}
	v[i][j]='#';
	play(i,j,st);
}

void solution(){
	cin >> row >> col;
	for(int i=0;i<row;++i){
		for(int j=0;j<col;++j){
			cin >> v[i][j];
		}
	}
	for(int i=0;i<col;++i){
		cin >> w[i];
	}
	for(int j=0;j<col;++j){
		ch = false;
		for(int i=0;i<row;++i){
			if(ch){
				continue;
			}
			if(v[i][j]=='O'){
				play(i,j,w[j]);
			}		
			else if(i==row-1){
				++i;
				play(i,j,w[j]);
			}
		}	
	}
	for(int i=0;i<row;++i){
		for(int j=0;j<col;++j){
			cout << v[i][j] ;
		}
		cout << endl;
	}
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
