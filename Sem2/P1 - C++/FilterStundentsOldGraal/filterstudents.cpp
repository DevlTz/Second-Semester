/*!
 * @file filter_students.cpp
 * @author Selan
 * @date Oct 7th, 2024
 *
 * Compilar: g++ -Wall -std=c++17 filter_students.cpp -o filter
 */

#include <iostream>
#include <sstream>

// Alias to the type we are working on.
using value_type = int;

/// Aqui é a função de filtragem que precisa ser implemetnada.
/*!
 * ENTRADA:
 * first_                                    last_
 *   |                                        |
 *   V                                        V
 * +---+---+---+---+---+---+---+---+---+---+
 * | -2| -8| 6 | 7 | -3| 10| 1 | 0 | -3| 7 |
 * +---+---+---+---+---+---+---+---+---+---+
 *
 * SAIDA:
 * first_               last_
 *   |                   |
 *   V                   V
 * +---+---+---+---+---+---+---+---+---+---+
 * | 6 | 7 | 10| 1 | 7 | ? | ? | ? | ? | ? |
 * +---+---+---+---+---+---+---+---+---+---+
 */
value_type* filter(value_type* first, const value_type* last, bool (*pred)(value_type))
{
value_type *slow{first};
value_type *fast{first};

    while(fast != last){
        if (pred(*fast)){
          *slow = *fast;
          slow++;
        }
        fast++;
      }
      return slow;
}
std::string to_string(const value_type* first, const value_type* last) {
      std::stringstream oss;
  
  oss << "[ ";
  while (first != last) {
    oss << *first++ << " ";
  } 
  oss << "]";
  return oss.str();

}
bool above5(value_type val){
  return (val > 5);
}
bool pair(value_type val){
  return (val % 2 == 0);
}
bool odd(value_type val){
  return (val % 2 != 0);
}
bool below0(value_type val){
  return (val < 0);
}
int main() {
  value_type arr[]{ -2, -8, 6, 7, -3, 10, 1, 0, -3, 7 };
  size_t arr_sz{ sizeof(arr) / sizeof(arr[0]) };

  // Printing the filtered array.
  std::cout << ">>> Original array: " << to_string(arr, arr + arr_sz) << '\n';

  // Filtering
   auto* new_end = filter(arr, arr + arr_sz, odd);

  std::cout << ">>> Filtered array: " << to_string(arr, new_end) << '\n';

  return EXIT_SUCCESS;
}
