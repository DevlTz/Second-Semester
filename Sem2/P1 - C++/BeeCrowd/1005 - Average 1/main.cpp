#include <bits/stdc++.h>

int main() {
    double a{}, b{};
    std::cin >> a >> b;
    double average = ((a * 3.5) + (b * 7.5)) / 11;
    std::cout << std::fixed << std::setprecision(5);
    std::cout << "MEDIA = " << average << "\n";
    return 0;
}