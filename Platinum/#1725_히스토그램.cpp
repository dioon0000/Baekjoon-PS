#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int n, ans;
int h[100005];
stack<int> s;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	//25�� �ٿ��� idx���� 1�϶� �Ŀ��� ���������Ƿ� �ʱⰪ 0�� ��������
	s.push(0);
	for(int i=1; i<=n; ++i)
		cin >> h[i];

	//ex) 1 2 3 4 5 6 ������׷��� ��� while���� �ɸ��� �����Ƿ� ���������� Ư¡�� �̿��Ͽ� �ʱ�ȭ�������� �ּ��� ������ ��� 0�� ����ִ� ���� �̿�
	for(int i=1; i<=n+1; ++i){
		while(!s.empty() && h[s.top()]>h[i]){
			int idx = s.top();
			s.pop();
			ans = max(ans, h[idx]*(i-s.top()-1));
		}
		s.push(i);
	}

	cout << ans;
	return 0;
}