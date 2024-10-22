#include <bits/stdc++.h>


int main(){
    int x{}; 
    srand(time(0));
    int random = std::rand() % 51; // Random number between 0 and 50
    std::cout << "Chute algo ai: ";
    int tries=0;
    int guess=-1;
    while(x!= random){
        std::cin >> x;
        if(x>random){
            std::cout << "Está frio, você está muito longe" << "\n";
            x = guess;
            tries++;
            if(x>random){
                std::cout << "Está mais frio" << "\n";
            }

        }
        else if(x<random){
            std::cout << "Está quente, você está muito perto" << "\n";
            x=guess;
            tries++;
            if(x<guess){
                std::cout << "Está mais quente" << "\n";
            }
        }
        else{
            std::cout << "Parabéns, você acertou!" << "\n";
            std::cout << "Você tentou " << tries << " vezes" << "\n";
        }
}
}