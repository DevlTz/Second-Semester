#include <bits/stdc++.h>

int main() {
    std::string passwd;
    
    while (std::getline(std::cin, passwd)) {
       

        bool has_UPC = false;
        bool has_lowc = false;
        bool has_digit = false;
        bool has_spac = false;
        bool has_punctuation = false;

        if (passwd.size() >= 6 && passwd.size() <= 32) {
            for (char ch : passwd) {
                if (isupper(ch)) {
                    has_UPC = true;
                }
                if (islower(ch)) {
                    has_lowc = true;
                }
                if (isdigit(ch)) {
                    has_digit = true;
                }
                if (isspace(ch)) {
                    has_spac = true;
                }
                if (ispunct(ch)){
                    has_punctuation = true;
                }
            }
            if (has_UPC && has_lowc && has_digit && !has_spac) {
                std::cout << "Senha valida." << "\n";
            } else {
                std::cout << "Senha invalida." << "\n";
            }
        } 
    }
    return 0;
}