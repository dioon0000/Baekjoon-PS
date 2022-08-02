//https://www.acmicpc.net/problem/7795
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	
	while(t--){
		int n, m, tmp, cnt=0;
		vector<int> a;
		vector<int> b;

		cin >> n >> m;
		for(int i=0; i<n; ++i){
			cin >> tmp;
			a.push_back(tmp);
		}
		for(int i=0; i<m; ++i){
			cin >> tmp;
			b.push_back(tmp);
		}
		sort(b.begin(), b.end());
		
		for(int i=0; i<n; ++i){
			int tar = a[i];
			//lower_bound : target������ ũ�ų� ���� ���� ó�������� ��ġ���� �����ϴ� �Լ� ��, �� ���� �������� �ʴ´ٸ� end���� ������
			cnt += lower_bound(b.begin(), b.end(), tar)-b.begin();
		}
		cout << cnt << '\n';
	}
	return 0;
}