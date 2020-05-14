#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

const int MAX = 15 + 1;
const int INF = 987654321;

int N;
vector <pair<int, int>>v;
int DP[MAX];

int maxProfit(int day)
{
	if (day == N + 1)
		return 0;
	if (day > N + 1)
		return -INF;
	int& result = DP[day];
	result = 0;
	result += max(v[day].second + maxProfit(day + v[day].first), maxProfit(day + 1));
	return result;
}

int main()
{
	cin >> N;
	v.push_back({ 0,0 });
	for (int i = 1; i <= N ; i++)
	{
		int day, cost;
		cin >> day >> cost;
		v.push_back({ day,cost });
	}


	
	memset(DP, -1, sizeof(DP));

	cout << maxProfit(1) << endl;
}