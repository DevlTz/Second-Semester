#include <bits/stdc++.h>


int main(){
    int x{}; 
    srand(time(0));
    int random = std::rand() % 51; // Random number between 0 and 50
    std::cout << "Chute algo ai!" <<"\n";
    int tries=0;

    int guess=-1;
    std::cout <<"Se você deseja quitar do jogo, digite um numero negativo" <<"\n";
    std::cin >> x;


    if(x < 0){
        return 0;
    }

    if(x == random){
        std::cout <<"Yeah, you guess was right! Ty for Playing" <<"\n";
    }
    else{
        std::cout << "Você errou! Tente mais uma vez:" << "\n";
        while(x!= random){

            int testhot = abs(guess - random );
            int testcold = abs(guess - random);

        if(x>random){
            std::cout << "Está frio, você está muito longe" << "\n";
            guess=x;
            tries++;
            std::cin >> x;
            if(x<guess){
                std::cout << "Está mais frio" << "\n";
                guess=x;
            }

        }
        else if(x<random){
            std::cout << "Está quente, você está muito perto" << "\n";
            guess=x;
            tries++;
            std::cin >> x;
            if(x>guess){
                std::cout << "Está mais quente" << "\n";
                guess=x;
            }
        }
        else{
            std::cout << "Parabéns, você acertou!" << "\n";
            std::cout << "Você tentou: " << tries << " vezes" << "\n";
        } 
        if(x < 0){
            break;
        }

    }
}
}