#include <bits/stdc++.h>

int main() {
  std::string line;

  while (std::getline(std::cin, line)) {
    if (line == "*") {
      break;
    }

    std::istringstream iss(line);
    std::string word;
    char firstChar;
    bool isTautogram = true;

    if (iss >> word) {
      firstChar = tolower(word[0]);
      while (iss >> word) {
        if (tolower(word[0]) != firstChar) {
          isTautogram = false;
          break;
        }
      }
    }

    if (isTautogram) {
      std::cout << 'Y' << "\n";
    } else {
      std::cout << 'N' << "\n";
    }
  }

  return 0;
}
