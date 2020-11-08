#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
const double PI = 3.141593;

int main() {
    int T;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!" << endl;
    } else if (T == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4 << endl;
    } else if (T == 3) {
        cout << 14 / 4 << endl;
        cout << 14 - 14 % 4 << endl;
		cout << 14 % 4; 
    } else if (T == 4) {
        cout << setprecision(6) << 500.0 / 3 << endl;
    } else if (T == 5) {
        cout << (260 + 220) / 32 << endl; 
    } else if (T == 6) {
        cout << sqrt(6 * 6 + 9 * 9) << endl;
    } else if (T == 7) {
    	int balance = 100;
    	balance += 10;
		cout << balance << endl;
		balance -= 20;
		cout << balance << endl;
		balance = 0;
		cout << balance << endl;
    } else if (T == 8) {
        cout << 2 * PI * 5 << endl;
		cout << PI * 5 * 5 << endl;
		cout << 4.0 / 3 * PI * 5 * 5 * 5 << endl; 
    } else if (T == 9) {
        cout << 22 << endl;
    } else if (T == 10) {
        cout << 9 << endl;
    } else if (T == 11) {
        cout << 100.0  / 3 << endl;
    } else if (T == 12) {
        cout << 'M' - 'A' + 1 << endl;
        cout << char('A' + 18 - 1) << endl; 
    } else if (T == 13) {
        double S1 = 4.0 / 3 * PI * 4 * 4 * 4;
		double S2 = 4.0 / 3 * PI * 10 * 10 * 10;
		cout << (int)pow(S1 + S2, 1.0 / 3) << endl;
    } else if (T == 14) {
        cout << 50 << endl;
    }
    return 0;
}
