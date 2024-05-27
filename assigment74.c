// C program to calculate the area of a circle
#include <stdio.h>

// User defined function to calculate circle's area
float getCircleArea(float radius){
    
    const float PI = 3.14;
    float area;
    
    // Calculate the area
    area = PI * radius * radius;
    
    return area;  // Return the area
    
}

int main(){
    
    // Declare the variables
    float radius, circleArea;
    
    printf("Enter the Radius of the Circle: ");
    scanf("%f", &radius);
    
    // call the function
    circleArea = getCircleArea(radius);
    
    // Print the result
    printf("The Area of the Circle is: %f", circleArea);
    
    return 0;
    
}

/*
Code Explanation:
The program asks the user to input the radius of the circle which is stored in the radius 
variable.
To calculate the area of the circle, we call the getCircleArea() function 
which takes the radius of the circle as an argument and returns the calculated area.
The value returned by the getCircleArea() function is stored in the circleArea variable.
Finally, the area of the circle is printed on the screen using the printf() function.
*/