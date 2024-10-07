#include <bits/stdc++.h>

int main(){
    
    int l{}, c{};
    std::cin >> l >> c;

    int place = (l + c + 1) % 2;
    std::cout << place << "\n";

    return 0;
}
