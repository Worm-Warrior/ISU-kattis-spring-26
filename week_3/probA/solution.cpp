#include <bits/stdc++.h>


int main() {
	int len;
	std::cin >> len;
	std::string input;
	std::cin.ignore();
	std::getline(std::cin, input);

	std::stack<char> st;

	// Loop over string, if open symbol push onto stack, if closing pop and match same type.
	
	for (int i = 0; i < len; ++i) {
		char c = input[i];
		char opening;

		switch(c) {
			case ' ':
				continue;
				break;
			case '(':
				st.push(input[i]);
				break;
			case '[':
				st.push(input[i]);
				break;
			case '{':
				st.push(input[i]);
				break;
			case ')':
				if (st.empty()) {
					printf("%c %d\n", input[i], i);
					return 0;
				}
				opening = st.top();
				st.pop();
				if (opening != '(') {
					printf("%c %d\n", input[i], i);
					return 0;
				}
				break;
			case ']':
				if (st.empty()) {
					printf("%c %d\n", input[i], i);
					return 0;
				}

				opening = st.top();
				st.pop();
				if (opening != '[') {
					printf("%c %d\n", input[i], i);
					return 0;
				}
				break;
			case '}':
				if (st.empty()) {
					printf("%c %d\n", input[i], i);
					return 0;
				}
				opening = st.top();
				st.pop();
				if (opening != '{') {
					printf("%c %d\n", input[i], i);
					return 0;
				}
				break;
		}
	}
	printf("ok so far\n");
}
