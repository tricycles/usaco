#include <bits/stdc++.h>

using namespace std;
 
typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

#define FOR(x,y) for(int x=0;x<y;x++)
#define FOR1(x,y) for(int x=1;x<y;x++)

#define trav(a, x) for (auto a : x)

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound

#define sz(x) (int)x.size()
#define beg(x) x.begin()
#define en(x) x.end()
#define all(x) beg(x), en(x)
#define resz resize

const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001;
const ld PI = 4*atan((ld)1);

void setIO(string y) {
  ios_base::sync_with_stdio(0); cin.tie(0);
  freopen((y+".in").c_str(),"r",stdin);
  freopen((y+".out").c_str(),"w",stdout);
}

int N;
char mail[MX];
int main () {
	setIO("whereami");
  cin >> N >> mail;
  int ans = N;
  FOR(i,N) {
  	int ptr = 0;
  	int cntr = 0;
  	set<string> mailboxes;
  	while(ptr+i<N) {
  		string temp = "";
  		for(int j=ptr;j<=ptr+i;j++) {
  			temp += mail[j];
  		}
  		mailboxes.insert(temp);
  		ptr++; cntr++;
  	}
  	if(sz(mailboxes)==cntr) {
  		ans = i+1;
  		break;
  	}
  }
  cout<<ans<<endl;
}