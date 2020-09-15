// Task - Caclulating the area of a circle
// using a function

#include <iostream>
#include <vector>

double circle_radius = 0;
double cylinder_height = 0;
const double pi = 3.14;

double area(double);
double volume(double, double);

int main()
{
    std::cout << " Enter the radius of the circle: ";
    std::cin >> circle_radius;
    
    std::cout << " Thank you.\n";

    std::cout << " Enter the height of the circle: ";
    std::cin >> cylinder_height;
    
    std::cout << std::endl;
    
    std::cout << " The area of the circle is: " << area(circle_radius) << " m^2" << std::endl;
    std::cout << " The volume of the circle is: " << volume(circle_radius, cylinder_height) <<" m^3" << std::endl;

    return 0;
}

double area(double radius) {
    return (pi * radius * radius);
}


double volume(double radius, double height) {
    return (pi * radius * radius * height);
}