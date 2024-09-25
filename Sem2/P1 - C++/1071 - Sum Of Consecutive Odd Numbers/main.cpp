#include <stdio.h>
#include <bits/stdc++.h>
int main() {
 
  int x, y;
  int maior, menor;
  std::cin >> x  >> y;
  if (x > y){
      maior = x;
      menor = y;
  }
  if (x<y) {
      maior = y;
      menor = x;
  }
  
    int imp = 0;
    for(int i = menor + 1; i < maior; i++){
        if (i%2!=0){
            imp+=i;
        }
    }

    std::cout << imp << "\n";

    return 0;
}