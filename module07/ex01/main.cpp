#include "iter.hpp"

int main(void) {
    int arr[5] = {1, 2, 3, 4, 5};
    std::string arr2[3] = {"hello", "hi", "world"};

    iter(arr, 5, increment);
    iter(arr, 5, print);
    iter(arr2, 3, print);

    return 0;
}
