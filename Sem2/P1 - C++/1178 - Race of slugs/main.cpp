#include <bits/stdc++.h>

int main() {
    int l{};
    while (std::cin >> l) {
        int max_speed = 0;
        for (int i = 0; i < l; ++i) {
            int speed{};
            std::cin >> speed;
            if (speed > max_speed) {
                max_speed = speed;
            }
        }
        if (max_speed < 10) {
            std::cout << 1 << std::endl;
        } else if (max_speed < 20) {
            std::cout << 2 << std::endl;
        } else {
            std::cout << 3 << std::endl;
        }
    }
    return 0;
}
