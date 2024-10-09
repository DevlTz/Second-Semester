#include <bits/stdc++.h>

int main() {
    int a{}, b{}, c{};
    std::cin >> a >> b >> c;
    int x = a, y = b, z = c;

    if (a > b) {
        std::swap(a, b);
    }
    if (a > c) {
        std::swap(a, c);
    }
    if (b > c) {
        std::swap(b, c);
    }

    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << c << "\n";
    std::cout << "\n";
    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << z << "\n";

    return 0;
}