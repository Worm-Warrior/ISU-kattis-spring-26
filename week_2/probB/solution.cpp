#include <bits/stdc++.h>
#include <iostream>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> numbers;
  int temp;

  for (int i = 0; i < n; i++) {
    std::cin >> temp;
    numbers.push_back(temp);
  }


  // We can calculate the max and min to right and left by looping once from
  // each side The max of left and min of right is all we need to determine
  // pivot We can precalc them based on the index of pivot by looping from both
  // sides and comparing max/min

  std::vector<int> left_max(n);
  std::vector<int> right_min(n);


  // both of these are not skipping the current pivot in the calc of min and max
  // so on piv:20 the right_min can be 20, and the max is not keeping the righ number across the indexes
  left_max[0] = 0;
  for (int i = 1; i < n; i++) {
    if (left_max[i - 1] < numbers[i]) {
      left_max[i] = numbers[i-1];
    } else {
      left_max[i] = left_max[i-1];
    }
    printf("%d\n", i);
  }

  printf("\n\n");
  std::cout << left_max.size() << std::endl;
  for (auto a : left_max)
    std::cout << a << std::endl;

  right_min[n-1] = numbers[n-1];
  for (int i = n-2; i > 0; i--) {
    if (right_min[i+1] > numbers[i]) {
      right_min[i] = numbers[i];
    } else {
      right_min[i] = right_min[i+1];
    }
  }

  printf("\n\n");
  std::cout << right_min.size() << std::endl;
  for (auto a : right_min)
    std::cout << a << std::endl;

  std::vector<int> pivots;

  for (int i = 0; i < n; i++) {
    printf("piv: %d -- left_max: %d -- right_min: %d\n", numbers[i], left_max[i], right_min[i]);
    if (left_max[i] <= numbers[i] && right_min[i] > numbers[i]) {
      printf("if entered\n");
      pivots.push_back(numbers[i]);
    }
  }

  printf("\n\n");
  std::cout << pivots.size() << std::endl;
  for (auto a : pivots)
    std::cout << a << std::endl;
}
