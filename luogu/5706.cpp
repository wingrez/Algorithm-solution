#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double t;
	int n;
	cin >> t >> n;
	cout << setiosflags(ios::fixed) << setprecision(3) << t /n << endl;
	cout << n * 2 << endl;
	return 0;
}
