//بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ 
/*
		  "صلي على النبي"
	* قَالُوا سُبْحَانَكَ لَا عِلْمَ لَنَا إِلَّا مَا عَلَّمْتَنَا  إِنَّكَ أَنتَ الْعَلِيمُ الْحَكِيمُ *
*/
#include<vector>
#include <iostream>
#include<climits>
#include<cstring>
#include<algorithm>
#include<map>
#include<cmath>
#include<bitset>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<iomanip>
#include<stack>
#include<vector>

using namespace std;
#define ll long long
#define ld long double
#define Y "YES"
#define O "NO"
#define el cout<<endl;
#define ON(n, k) ((n) | (1 << (k)))
#define OFF(n, k) ((n) & ~(1 << (k)))
#define mod = 1e9 + 7;
#define N 509
#define gr vector<vector<pair<int,int>>>
const int dx[] = { 0,0,-1,1,-1,1,1,-1 };
const int dy[] = { 1,-1,0,0 ,-1,1,-1,1 };
const char dir[] = { 'R','L','F','D' };

int main()
{

	int t = 1;
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	cin >> t;
	while (t--) {
		string s, t;
		cin >> s >> t;
		int n = s.size();
		int m = t.size();
		vector<char>v;
		int cnt = 0;
		for (int i = 0; i < n; i++)
		{
			v.push_back(s[i]);
			if (v.size() >= m)
			{
				string temp = "";
				int j = v.size() - 1;
				int mm = m;
				while (mm--)
				{
					temp.push_back(v[j]);
					j--;
				}
				mm = m;
				reverse(temp.begin(), temp.end());
				if (t == temp)
				{
					cnt++;
					while (mm--)
					{
						v.pop_back();
					}

				}

			}
		}
		cout << cnt; el;
	}
	return 0;
}
/*
الحمدلله رب العالمين
*/
