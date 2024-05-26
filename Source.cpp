#include <iostream>
#include <limits>

int main() {
    double sum = 0.0;
    int count = 0;
    double number;

    std::cout << "Enter numbers to calculate the average (enter a non-numeric value to end):" << std::endl;

    while (std::cin >> number) {
        sum += number;
        count++;
    }

    if (count == 0) {
        std::cout << "No numbers were entered." << std::endl;
    }
    else {
        double average = sum / count;
        std::cout << "The average of the entered numbers is: " << average << std::endl;
    }

    return 0;
}
