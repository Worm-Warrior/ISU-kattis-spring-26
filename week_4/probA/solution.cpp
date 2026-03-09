#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	cin.ignore();
	vector<vector<string>> names;
	int g = 0;
	while (n != 0) {
		names.push_back({});
		cout << n << endl;
		for (int i = 0; i < n; i++) {
			string temp;
			getline(cin, temp);
			names[g].push_back(temp);
		}
		cin >> n;
		cout << n << endl;
		cin.ignore();
		g++;
	}
	vector<vector<string>> sorted(names.size());

	cout << sorted.size() << " sorted size" << endl;

	for (auto a : names) {
		for (auto s : a) {
			cout << s << endl;
			cout << s.substr(0, 2) << endl;
		}
		cout << "-----" << endl;
	}

	string poincare = "Poincare";
	string ponchhammer = "Pochhammmer";
}
