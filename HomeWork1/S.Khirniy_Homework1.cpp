// Homework1 Khirniy Serghii

#include <cmath>
#include <iostream>

int main() {
    // Setting variable a.
    double a{ 0 };

    // Keyboard data entry.
    std::cout << "Enter value a: ";
    while (!(std::cin >> a)) {
        std::cin.clear(); // A function that restores a thread if something goes
                          // wrong. For example, I wanted to get a number, but I got
                          // a letter. The thread goes into a stupor. To restore the
                          // thread to work, cin.clear () is called.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
            '\n'); // A function that reads a character and ignores it.
        std::cout << "Input Error. Repeat Entry: ";
    }

    // Setting variable b.
    double b{ 0 };

    std::cout << "Enter value b: ";
    while (!(std::cin >> b)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Input Error. Repeat Entry: ";
    }

    // Setting variable c.
    double c{ 0 };

    std::cout << "Enter value c: ";
    while (!(std::cin >> c)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Input Error. Repeat Entry: ";
    }

    // Setting constants.
    const int ConstTwo{ 2 };
    const int ConstFour{ 4 };

    // Setting variables.
    double x{ 0 };
    long double D = b * b - ConstFour * a * c;

    // The calculation of the discriminant. And its conclusion to the console.
    if ((D) >= 0) {
        x = (-b + sqrt(D)) / (ConstTwo * a);
        std::cout << "The first root is " << x << std::endl;
        x = (-b - sqrt(D)) / (ConstTwo * a);
        std::cout << "The second root is " << x << std::endl;
    }
    else {
        std::cout << "The discriminant is less than 0, the roots are immaterial."
            << std::endl;
    }

    return 0;
}
