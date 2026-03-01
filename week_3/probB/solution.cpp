#include <bits/stdc++.h>
#include <string>


int main() {
	std::string numbers;
	std::getline(std::cin, numbers);
	auto f = numbers.find_first_of(' ');
	std::string height_str = numbers.substr(0,f);
	std::string width_str = numbers.substr(f+1, numbers.size());

	int w = std::stoi(width_str);
	int h = std::stoi(height_str);
}
