#include <bits/stdc++.h>

int main() {
  double arr[12][12]{}, sum{};
  int count{};
  char operation{};

  std::cin >> operation;

  for (int i{}; i < 12; ++i) {
    for (int j{}; j < 12; ++j) {
      std::cin >> arr[i][j];
    }
  }

  for (int i{1}; i < 12; ++i) {
    for (int j{0}; j < 12 - i; ++j) {
      sum += arr[i][j];
      ++count;
    }
  }

  double result = (operation == 'S') ? sum : sum / count;

  std::cout << std::fixed << std::setprecision(1) << result << "\n";

  return 0;
}
