#include <bits/stdc++.h>

int main(int argc, char* argv[]){


    double x1 {}, y1{}, x2{}, y2{};
    std::cin >> x1 >> y1 >> x2 >> y2;
    double value = sqrt(pow(x2-x1)+pow(y2-y1));
    std::cout << std::setprecision (5);
    std::cout << value; 


}
