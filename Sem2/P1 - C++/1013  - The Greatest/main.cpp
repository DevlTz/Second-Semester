#include <bits/stdc++.h>

int main(int argc, char* argv[]){
  int a, b, c, maior=0;
    std::cin >> a >> b >> c;   
    maior = (a+b+abs(a-b))/2;
    maior = (maior+c+abs(maior-c))/2;
    std::cout << maior << " eh o maior" << "\n";
}