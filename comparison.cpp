#include <assert.h>

// TODO: Declare a generic, templatized function Max()
template <typename Type>
Type Max(Type a, Type b) {
    return a > b ? a : b;
}


int main() { 
  assert(Max(10, 50) == 50);
  assert(Max(5.7, 1.436246) == 5.7);
}