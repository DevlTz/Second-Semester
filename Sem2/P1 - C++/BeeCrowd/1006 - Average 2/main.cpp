#include <bits/stdc++.h>

int main() {
  double a{}, b{}, c{};
  std::cin >> a >> b >> c;
  std::cout << std::fixed << std::setprecision(1);
  std::cout << "MEDIA = " << ((a * 2) + (b * 3) + (c * 5)) / 10 << "\n";
  return 0;
}
