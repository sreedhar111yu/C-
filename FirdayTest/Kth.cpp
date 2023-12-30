#include <iostream>
#include <vector>

int main() {
    // Input: Get array elements
    std::cout << "Enter the size of the array: ";
    int size;
    std::cin >> size;

    std::vector<int> array(size);

    std::cout << "Enter the array elements:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> array[i];
    }

    // Input: Get the value of k
    std::cout << "Enter the value of k: ";
    int k;
    std::cin >> k;

    // Print the kth element
    if (k >= 1 && k <= size) {
        int kthElement = array[k - 1];
        std::cout << "The " << k << "th element in the array is: " << kthElement << std::endl;
    } else {
        std::cout << "Invalid value of k. Please enter a valid value between 1 and " << size << std::endl;
    }

    return 0;
}
