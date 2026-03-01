#include <bits/stdc++.h>
#include <cstdint>
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
  // this loop is mixing the pivot logic and the max logic, there is no pivot.
  
  for (int i = 1; i < n; ++i) {
    if (numbers[i-1] > left_max[i-1]) {
      left_max[i] = numbers[i-1];
    } else {
      left_max[i] = left_max[i-1];
    }
  }

  right_min[n-1] = INT32_MAX;
  for (int i = n-2; i >= 0; i--) {
    if (numbers[i+1] < right_min[i+1]) {
      right_min[i] = numbers[i+1];
    } else {
      right_min[i] = right_min[i+1];
    }
  }

  std::vector<int> pivots;

  for (int i = 0; i < n; i++) {
    if(left_max[i] <= numbers[i] && right_min[i] > numbers[i]) {
      pivots.push_back(numbers[i]);
    }
  }

  std::cout << pivots.size() << " ";
  for (uint i = 0; i < pivots.size() && i < 100; i++) {
    std::cout << pivots[i] << " ";
  }
}
