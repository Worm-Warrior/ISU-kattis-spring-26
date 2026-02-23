#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

int main() {
		// lazy solution is just sort asc and desc and then check equality of the orignial
		// so 2 arrays and if they both fail then neither
		std::vector<std::string> names;
		int n;
		std::cin >> n;
		std::cin.ignore();

		for(int i = 0; i < n; i++) {
				std::string line;
				std::getline(std::cin, line);
				if (line == "")
						continue;
				names.push_back(line);
		}
		
		std::vector<std::string> asc(names);
		std::vector<std::string> desc(names);

		std::sort(asc.begin(), asc.end());
		std::sort(desc.begin(), desc.end(), std::greater<std::string>());

		if (names == asc) {
				std::cout << "INCREASING";
				return 0;
		}
		else if (names == desc) {
				std::cout << "DECREASING";
				return 0;
		}
		else {
				std::cout << "NEITHER";
				return 0;
		}
}
