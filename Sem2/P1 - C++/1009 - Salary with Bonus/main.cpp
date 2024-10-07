#include <bits/stdc++.h>

int main() {
    double fixS, sales;
    char name[30];
    
    std::cin.getline(name, 30);
    std::cin >> fixS >> sales;
    
    double finalS = fixS + (sales * 0.15);
    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "TOTAL = R$ " << finalS << "\n";
    
    return 0;
}