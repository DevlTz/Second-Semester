#include <bits/stdc++.h>
int main() {
    int N[20] = {0}; 

    for (int i=0; i<20; i++){
        std::cin >> N[i];
    }
    std::reverse(std::begin(N), std::end(N));
    for (int i=0; i<20; i++){
        std::cout << "N[" << i << "] = " << N[i] << std::endl;
    }

    return 0;
}