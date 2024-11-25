#include <bits/stdc++.h>

class ts{
  enum class ts_state {start, locked, unlocked, out_of_order, UNDEF};
  enum class input_t{push, coin, off};

  enum ts_state actual_state{ts_state::start};
  input_t current_action;

  public:
  bool out_of_order() const{
  return actual_state == ts_state::out_of_order; // if the state is out of order, return true > the machine is out of order
  }
   
    void process_event(){
        if(actual_state == ts_state::locked || actual_state == ts_state::unlocked){
        std::string action;
        std::getline(std::cin, action);
        if (action=="COIN" || action=="coin" || action=="c"){
            current_action = input_t::coin; 
        }
        else if(action=="PUSH" || action=="push" || action=="p"){
            current_action = input_t::push;
        }
        else if(action=="OFF" || action=="off" || action=="o"){
            current_action = input_t::off;
        }
        }
    }
     void update(){
        if(actual_state == ts_state::start){
            actual_state = ts_state::locked;
        }

        else if(actual_state == ts_state::locked){
        if(current_action == input_t::coin){
            actual_state == ts_state::unlocked;
        }
    }
        else if (actual_state == ts_state::unlocked){
            if(current_action == input_t ::push){
                actual_state = ts_state::locked;
            }
        }
        if (current_action == input_t::off){
                actual_state = ts_state::out_of_order;
            }
           
    }
        void render(){    
            if(actual_state == ts_state::locked){
            std::cout << "STATE: [LOCKED]" <<std::endl;
            std::cout << "Which event do you want to process? (push, coin, off)" << std::flush;
            }
            else if (actual_state == ts_state::unlocked){
            std::cout << "STATE: [UNLOCKED]" <<std::endl;
            std::cout << "Which event do you want to process? (push, coin, off)" << std::flush;
            }
            else if (actual_state == ts_state::out_of_order){
            std::cout << "STATE: [Out of order]";
            }
            else if (actual_state == ts_state::UNDEF){
            std::cout << "STATE: [UNDEFINED]";
            assert(false);
            }
        
        }
        };   

int main(){
    ts t;
    while(not t.out_of_order()){
        t.process_event();
        t.update();
        t.render();
    }

}

// improvements - coletar moedas 
// fazer voltar de out of order p locked