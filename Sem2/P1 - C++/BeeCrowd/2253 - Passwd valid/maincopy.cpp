#include <bits/stdc++.h>

int main() {
    std::string passwd;

    while (std::getline(std::cin, passwd)) {
        bool has_UPC = false;
        bool has_lowc = false;
        bool has_digit = false;
        bool is_valid = true;  

        if (passwd.size() < 6 || passwd.size() > 32) {
            is_valid = false;
        } else {
            for (char ch : passwd) {
                if (isupper(ch)) {
                    has_UPC = true;
                } else if (islower(ch)) {
                    has_lowc = true;
                } else if (isdigit(ch)) {
                    has_digit = true;
                } else if (isspace(ch) || ispunct(ch)) {
                    is_valid = false;
                    break;
                }
            }
        }

        if (is_valid && has_UPC && has_lowc && has_digit) {
            std::cout << "Senha valida.\n";
        } else {
            std::cout << "Senha invalida.\n";
        }
    }

    return 0;
}
