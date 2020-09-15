// Task - Caclulating the area of a circle
// using a function

#include <iostream>
#include <vector>

double radius = 0;
double height = 0;
const double pi = 3.14;

double area(double radius);
double volume(double radius, double height);

int main()
{
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    
    std::cout << "Thank you.\n";

    std::cout << "Enter the height of the circle: ";
    std::cin >> height;

}

double area(double radius) {
    return (pi * radius * radius);
}


double volume(double radius, double height) {
    return (pi * radius * radius * height);
}