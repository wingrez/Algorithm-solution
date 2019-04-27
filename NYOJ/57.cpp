#include<cstdio>
#include<cstring>
#include<iostream>
#include<string>
#include<set>
#include<algorithm>
using namespace std;

int n;
set<string> sset;
string s;

int main() {
	cin >> n;
	while (n--) {
		int cnt = 0, a, b, diff;
		sset.clear();

		cin >> s;
		sset.insert(s);

		while (true) {
			cnt++;
			sort(s.begin(), s.end());
			b = stoi(s);
			reverse(s.begin(), s.end());
			a = stoi(s);

			diff = a - b;
			if (sset.find(to_string(diff)) == sset.end()) {
				sset.insert(to_string(diff));
				s = to_string(diff);
			}
			else break;
		}

		printf("%d\n", cnt);
	}
	return 0;
}
