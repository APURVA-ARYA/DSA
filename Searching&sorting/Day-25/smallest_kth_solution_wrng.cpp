#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void solve(int p,int q) {
	
	vector<pair<int, int>> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i].ff >> arr[i].ss;
	}

	sort(arr.begin(), arr.end());
	int idx = 0;
	for (int i = 1; i < n; i++) {
		if (arr[idx].ff > arr[idx].ss) {
			arr[idx].ss = max(arr[idx].ff, arr[idx].ss);
		}
		else {
			idx++;
			arr[idx] = arr[i];
		}
	}
	while (q--) {

		int k;
		cin >> k;

		int ans = -1;
		for (int i = 0; i <= idx; i++) {
			if (arr[i].ss - arr[i].ff + 1 > k) {
				ans = arr[i].ff + k - 1;
				break;
			}
			else {
				k -= arr[i].ss - arr[i].ff + 1;
			}
		}
		cout << ans << '\n';
	}



}

int main(){
int p=2;
int q=9;

solve(p,q);

	return 0;
}