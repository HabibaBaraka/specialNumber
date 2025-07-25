/*
								  "صلي على النبي"
			  * قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا ۖ إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<iomanip>
#include<unordered_map>
#include<stack>
#include<set>
#include<queue>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','U','D' };
using namespace std;
#define ll long long
#define ld long double
#define  graph vector<vector<int>>
#define Y "YES\n"
#define O "NO\n"
#define el cout<<endl;
const ll mod = 1e9 + 7;
const int N = 1e3 + 4;
int n, m;
ll dp[N][N];
ll a[N], b[N];

ll LCS(int i, int j)
{
	// base case 
	if (i == n || j == m)return 0;
	ll& ret = dp[i][j];
	if (~ret)return ret;
	// transition 
	if (a[i] == b[j])return ret = LCS(i + 1, j + 1) + 1;
	return ret = max(LCS(i + 1, j), LCS(i, j + 1));
}
void print(int i=0,int j=0)
{
	// base case 
	if (i == n || j == m)return;
	ll& ret = dp[i][j];
	// transition
	if (a[i] == b[j])
	{
		cout << a[i] << " ";
		print(i + 1, j + 1);
	}
	else if (ret == LCS(i, j + 1))
	{
		print(i, j + 1);
	}
	else if (ret == LCS(i + 1, j))print(i + 1, j);
}

int  main()
{
	//freopen("input.txt", "r", stdin);    
	//freopen("output.txt", "w", stdout);  

	ios_base::sync_with_stdio(0); cout.tie(0), cin.tie(0);
	int t = 1;

	//cin >> t;

	while (t--)
	{
		memset(dp, -1, sizeof dp);
		cin >> n >> m;
		for (int i = 0; i < n; i++)cin >> a[i];
		for (int i = 0; i < m; i++)cin >> b[i];
		cout << LCS(0, 0); el;
		print();
	}
}
