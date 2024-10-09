#include <bits/stdc++.h>

int getAlphabetPosition(char c) { return c - 'A'; }

int calculateHash(std::string input[], int l) {
  int hash{};
  for (int i{}; i < l; ++i) {
    for (size_t j{}; j < input[i].size(); ++j) {
      hash += getAlphabetPosition(input[i][j]) + i + j;
    }
  }
  return hash;
}

int main() {
  int n{};
  std::cin >> n;
  while (n--) {
    int l{};
    std::cin >> l;
    std::string input[100];
    for (int i{}; i < l; ++i) {
      std::cin >> input[i];
    }
    std::cout << calculateHash(input, l) << "\n";
  }
  return 0;
}
