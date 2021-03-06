//#include <cmath>
//#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int N, Q, tmp;
	vector<int> v;
	vector<int>::iterator lower, upper;

	cin >> N;
	v.resize(N);
	for (int i = 0; i < N; i++) {
		cin >> v[i];
	}

	cin >> Q;
	for (int i = 0; i < Q; i++) {
		cin >> tmp;
		lower = lower_bound(v.begin(), v.end(), tmp);

		if (*lower == tmp) {
			cout << "Yes " << (lower - v.begin() + 1) << endl;
		}
		else {
			upper = upper_bound(v.begin(), v.end(), tmp);
			cout << "No " << (upper - v.begin() + 1) << endl;
		}
	}

	return 0;
}