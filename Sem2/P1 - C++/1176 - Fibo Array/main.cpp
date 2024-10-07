#include <bits/stdc++.h>

int main() {
   unsigned long long fib[61] = {0, 1};  

    for (int i = 2; i < 61; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];  
    }

    int t{}, n{};
    std::cin >> t; 

    while (t--) {
        std::cin >> n;
        std::cout << "Fib(" << n << ") = " << fib[n] << "\n";
    }

    return 0;
}