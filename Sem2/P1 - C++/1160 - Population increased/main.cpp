#include <iostream>

int main() {
    int t{};
    std::cin >> t;
    while (t--) {
        int pa{}, pb{};
        double g1{}, g2{};
        std::cin >> pa >> pb >> g1 >> g2;

        int years = 0;
        while (pa <= pb && years <= 100) {
            pa += pa * g1 / 100;
            pb += pb * g2 / 100;
            years++;
        }

        if (years > 100) {
            std::cout << "Mais de 1 seculo." << "\n";
        } else {
            std::cout << years << " anos." << "\n";
        }
    }

    return 0;
}
