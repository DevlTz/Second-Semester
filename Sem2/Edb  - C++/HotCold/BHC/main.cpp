#include <bits/stdc++.h>

using index_t = std::size_t; // Define index_t as an alias for std::size_t
using value_t = int; // Define value_t as an alias for int (or any other type you need)

constexpr std::size_t sz = 100; // Define the size of the array

int binary_search(const std::array<value_t, sz> &arr, value_t target, index_t l, index_t r) {
  while (l <= r) {
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

int main(){
  // Your main function code here
}
