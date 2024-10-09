#include <bits/stdc++.h>
int main() {

  int x{}, y{};
  int big, small;
  std::cin >> x >> y;

  if (x > y) {
    big = x;
    small = y;
  }
  if (x < y) {
    big = y;
    small = x;
  }

  int imp = 0;
  for (int i = small + 1; i < big; i++) {
    if (i % 2 != 0) {
      imp += i;
    }
  }

  std::cout << imp << "\n";

  return 0;
}