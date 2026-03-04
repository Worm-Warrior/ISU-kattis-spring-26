#include <bits/stdc++.h>
#include <string>

// DFA graph problem, find graph that loops back to the start after running a DFA?
//
// DFA -> follow as far as you can -> determine if it loops -> nullify the squares you took to get there
// Apparently recursion is good here? Loop normal, call rec function on each square?

int main() {
	int rows;
	std::cin >> rows;
	int cols;
	std::cin >> cols;

	std::cout << rows << " " << cols << std::endl;

	std::cin.ignore();

	std::vector<std::string> board;

	std::string s;
	for (int i = 0; i < rows; ++i) {
		std::getline(std::cin, s);
		board.push_back(s);
		std::cout << board[i] << std::endl;
	}
}
