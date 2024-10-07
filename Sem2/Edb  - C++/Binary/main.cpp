/*!
 * Several types of search algorithms in an array.
 * @date june 14th, 2024
 * To compile in terminal: g++ -Wall -std=c++11 buscas_estudantes.cpp -o busca
 */

#include <array>
#include <cassert>
#include <cstddef>
#include <iostream>
#include <sstream>
#include <string>

// Alias to make code easier to mantain.
using value_t = int;
using index_t = size_t;

/// Converts and returns the content of the array represented as a string.
template <std::size_t sz>
std::string to_string(const std::array<value_t, sz> &arr, index_t l,
                      index_t r) {
  std::ostringstream oss;
  oss << "[ ";
  for (index_t i{l}; i <= r; ++i) {
    oss << arr[i] << (i < r ? ", " : " ");
  }
  oss << "]";
  return oss.str();
}

/// Execute an iterative binary search on an array.
template <std::size_t sz>
int binary_search(const std::array<value_t, sz> &arr, value_t target, index_t l,
                  index_t r) {
  while (l <= r || r >=l) {
    int  mid = (l + r) / 2;
  if(arr[mid]==target){
    return mid;
  }
  else if(target < arr[mid]){
    r = mid -1;
  }
  else{
    l = mid +1;
  }
  
}
return -1;
             }

/// Execute a recursive binary search on an array.
template <std::size_t sz>
int binary_search_rec(const std::array<value_t, sz> &arr, value_t target,
                      index_t l, index_t r) {
  // TODO
  return -1;
}

/// Execute a linear search on an array.
template <std::size_t sz>
int linear_search(const std::array<value_t, sz> &arr, value_t target, index_t l,
                  index_t r) {
  // TODO
  return -1;
}

int main() {
  constexpr std::array<value_t, 8> arr{1, 3, 5, 6, 18, 20, 35, 47}; // Array
  value_t target{3};

  std::cout << "A: " << to_string(arr, 0, arr.size() - 1) << "\n";

  // Read from the standard input the target value.
  std::cout << ">>> Target? ";
  std::cin >> target;
  // Show the search domain
  std::cout << ">>> Looking for target value `" << target
            << "' in the range:\n\n";

  // Call the search algorithm
  std::cout << ">>> The search begins...\n";
  // int result = linear_search(arr, target, 0, arr.size()-1);
  int result = binary_search(arr, target, 0, arr.size() - 1);

  // Print the result
  if (result == -1) {
    std::cout << "    Target not found!\n";
  } else {
    std::cout << "    Target located at index " << result << "\n";
  }

  std::cout << "\n>>> Normal ending...\n\n";

  return EXIT_SUCCESS;
}