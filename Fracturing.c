// Tarun Singh 
//ta014989

#include <stdio.h>
#include <math.h>

#define PI 3.14159

// Function to calculate distance between two points
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

int main() {
    // Call the calculateDistance function
    calculateDistance();
    
    return 0;
}
