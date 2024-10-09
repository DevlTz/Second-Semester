#include <bits/stdc++.h>
int main() {
  int m{}, n{};

  while (true) {
    std::cin >> m >> n;
    if (m <= 0 || n <= 0)
      break;

    int sum = 0;
    if (m > n) {
      for (int i = n; i <= m; i++) {
        sum += i;
        std::cout << i << " ";
      }
    } else {
      for (int i = m; i <= n; i++) {
        sum += i;
        std::cout << i << " ";
      }
    }
    std::cout << "Sum=" << sum << "\n";
  }
  return 0;
}
