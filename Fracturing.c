// Tarun Singh
// ta014989
#include <stdio.h>
#include <math.h>

#define PI 3.14159

//  Function to calculate distance between two points
double calculateDistance() {
    double x1, y1, x2, y2, distance;
    
    // Get user input for the points
    printf("Enter x1: ");
    scanf("%lf", &x1);
    printf("Enter y1: ");
    scanf("%lf", &y1);
    printf("Enter x2: ");
    scanf("%lf", &x2);
    printf("Enter y2: ");
    scanf("%lf", &y2);
    
    // Calculate distance
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    // Print the points and distance
    printf("Point #1 entered: x1 = %.2lf; y1 = %.2lf\n", x1, y1);
    printf("Point #2 entered: x2 = %.2lf; y2 = %.2lf\n", x2, y2);
    printf("The distance between the two points is %.2lf\n", distance);
    
    return distance;
}

// Function to calculate perimeter git add Fracturing.c
double calculatePerimeter() {
    double distance = calculateDistance();
    double perimeter = PI * distance;

    // Print the perimeter
    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
    
    return 2.0; // Difficulty scale
}

// Function to calculate area (using the distance as the diameter)
double calculateArea() {
    double distance = calculateDistance();
    double radius = distance / 2.0;
    double area = PI * pow(radius, 2);

    // Print the area
    printf("The area of the city encompassed by your request is %.2lf\n", area);
    
    return 3.0; // Difficulty scale
}

// Function to calculate the width 
double calculateWidth() {
    double distance = calculateDistance();

    // Print the width
    printf("The width of the city encompassed by your request is %.2lf\n", distance);
    
    return 1.0; // Difficulty scale.
}

// Function to calculate the height (using the distance as the diameter again)
double calculateHeight() {
    double distance = calculateDistance();

    // Print the height
    printf("The height of the city encompassed by your request is %.2lf\n", distance);
    
    return 1.5; // Difficulty scale
}

int main(int argc, char **argv) {
    // Call the functions in order
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}
