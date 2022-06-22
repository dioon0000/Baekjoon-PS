//https://www.acmicpc.net/problem/2579
#include <iostream>
#include <algorithm>
#define MAX 305
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int arr[MAX]={0,}, dp[MAX]={0,};
	int n, tmp;
	cin >> n;

	for(int i=1; i<=n; ++i)
		cin >> arr[i];

	dp[1] = arr[1];
	dp[2] = arr[1]+arr[2];
	dp[3] = max(arr[1]+arr[3], arr[2]+arr[3]);
	for(int i=4; i<=n; ++i)
		dp[i] = max(dp[i-2]+arr[i], dp[i-3]+arr[i-1]+arr[i]);

	cout << dp[n] << '\n';
	return 0;
}
