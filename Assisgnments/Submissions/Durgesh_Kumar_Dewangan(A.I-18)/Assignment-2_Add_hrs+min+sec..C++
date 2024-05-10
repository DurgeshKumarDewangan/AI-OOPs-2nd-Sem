#include <iostream>

int main() {
    int hours, minutes, seconds;
    int totalSeconds;

    std::cout << "Enter hours: ";
    std::cin >> hours;

    std::cout << "Enter minutes: ";
    std::cin >> minutes;

    std::cout << "Enter seconds: ";
    std::cin >> seconds;

    totalSeconds = hours * 3600 + minutes * 60 + seconds;
    std::cout << "Total time in seconds is: " << totalSeconds << std::endl;

    return 0;
}
