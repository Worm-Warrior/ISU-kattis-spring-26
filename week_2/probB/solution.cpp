#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> numbers;
  int temp;

  for (int i = 0; i < n; i++) {
    std::cin >> temp;
    numbers.push_back(temp);
  }

  for (auto a : numbers)
    std::cout << a << std::endl;

  // We can calculate the max and min to right and left by looping once from
  // each side The max of left and min of right is all we need to determine
  // pivot We can precalc them based on the index of pivot by looping from both
  // sides and comparing max/min

  std::vector<int> left_max(n);
  std::vector<int> right_min;

  // wrong
  left_max.push_back(numbers[0]);
  for (int i = 1; i < n; i++) {
    if (left_max[i - 1] < numbers[i]) {
      left_max[i] = numbers[i];
    }
  }

  printf("\n\n");
  for (auto a : left_max)
    std::cout << a << std::endl;
}
