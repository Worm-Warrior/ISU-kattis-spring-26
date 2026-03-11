#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int comp_two_names(string name1, string name2) {
	return name1.compare(0, 2, name2, 0, 2);
}

void sort_names(vector<string> &names) {
	stable_sort(names.begin(), names.end(), [](const string& a, const string &b) {
		return comp_two_names(a, b) < 0;
	});
}

int main() {
	int n;
	cin >> n;
	cin.ignore();
	vector<vector<string>> names;
	int g = 0;
	while (n != 0) {
		names.push_back({});
		for (int i = 0; i < n; i++) {
			string temp;
			getline(cin, temp);
			names[g].push_back(temp);
		}
		cin >> n;
		cin.ignore();
		g++;
	}
	vector<vector<string>> sorted(names.size());

	for (auto a : names) {
		sort_names(a);
		for (auto s : a) {
			cout << s << endl;
		}
		cout << endl;
	}
}
