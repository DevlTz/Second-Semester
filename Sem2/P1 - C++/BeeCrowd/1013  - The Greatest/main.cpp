#include <bits/stdc++.h>

int main(int argc, char* argv[]){
  int a, b, c, big=0;
    std::cin >> a >> b >> c;   
    big = (a+b+abs(a-b))/2;
    big = (big+c+abs(big-c))/2;
    std::cout << big << " eh o maior" << "\n";
}