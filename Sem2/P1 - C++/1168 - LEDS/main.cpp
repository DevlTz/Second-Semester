#include <bits/stdc++.h>
int main() {

    int led_count[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int n{};
        std::cin >> n;
        while (n--) {
            std::string value;
            std::cin >> value;
            int total_leds = 0;
            for (char digit : value) {
                total_leds += led_count[digit - '0'];
            }
            std::cout << total_leds << " leds" << "\n";
        }
    return 0;
}
