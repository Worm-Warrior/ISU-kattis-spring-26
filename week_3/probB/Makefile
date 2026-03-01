all: solution
solution: solution.cpp
	g++ -std=c++20 -O2 -Wall -Wextra -Wshadow -Wconversion -o solution solution.cpp
clean:
	rm ./solution
run: solution
	./solution < input.txt
