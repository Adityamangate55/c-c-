#include <iostream>

int main() {
    // Conditional Statements
    int number = 7;

    std::cout << "Conditional Statements:" << std::endl;
    if (number > 0) {
        std::cout << number << " is positive." << std::endl;
    } else if (number < 0) {
        std::cout << number << " is negative." << std::endl;
    } else {
        std::cout << number << " is zero." << std::endl;
    }

    std::cout << std::endl;

    // For Loop
    std::cout << "For Loop (Counting from 1 to 5):" << std::endl;
        for (int i = 0; i >= -10; --i) {
            std::cout << i << " ";
    }
    std::cout << std::endl;

    // While Loop
    int count = 10;
    std::cout << "While Loop (Counting down from 5 to 1):" << std::endl;
    while (count > -5) {
        std::cout << count << " ";
        --count;
    }
    std::cout << std::endl;

    // Do-While Loop
    int value = 1;
    std::cout << "Do-While Loop (Incrementing value until it reaches 3):" << std::endl;
    do {
        std::cout << value << " ";
        ++value;
    } while (value < 10);
    std::cout << std::endl;

    return 0;
}
