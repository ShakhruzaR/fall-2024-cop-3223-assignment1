//********************************************************
// fracturing.c
// Author: Shakhruza Rustamova, 
// UCFID: 5646859
// Date: 9/2/2024
// Class: COP 3223, Professor Parra
// Purpose: This program is meant to take in two
// coordinate points from the user and use them to calculate
// distance, perimeter, area, height, and width of the circle
// Input: the coordinate points: x1, y1, x2, y2
//
// Output: The distance, perimeter, area, height, and width as doubles
// //********************************************************

#include <stdio.h>
#include <math.h>

//define PI for later use
#define PI 3.14159

//********************************************************
// double calculateDistance()
//
// Purpose:         Presents prompt for input and calculates distance
// Input:         4 doubles: x1, y1, x2, y2 as the coordinate points
// Output:              The found distance between the points (once)
// Precondition:    None.
// Postcondition:   Should return the result of calculation
//********************************************************

double calculateDistance()
{
    //static int count to keep track of # of times function runs

    static int count = 0;
    double x1, y1, x2, y2;
    static double distance;

    

    
    if (count == 0)  // if statement to prevent printing distance and asking for input multiple times
    {

        printf("Enter x1: "); // ask for input and enter input into doubles
        scanf("%lf", &x1);

        printf("Enter x2: ");
        scanf("%lf", &x2);

        printf("Enter y1: ");
        scanf("%lf", &y1);

        printf("Enter y2: ");
        scanf("%lf", &y2);

    //calculate distance between points

        distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

        printf("The distance between the two points is %.3lf\n", distance);
            
    } //end if

    //update counter
     count++;
    
    //return distance so the value can be used by other functions
    return distance;
    
}

//********************************************************
// double calculatePerimeter()
//
// Purpose:             Uses distance to find perimeter/circumference of the circle.
// Output:          Prints the circumference.
// Precondition:        Distance function runs properly.
// Postcondition:   None.
//********************************************************

double calculatePerimeter()
{

   //distance is diameter so find radius
    double radius = calculateDistance()/2;
    
    //print circumference of the circle
    printf("The perimeter of the city encompassed by your request is %.3lf\n", (2*PI*radius));

    return 3.2;

}


//********************************************************
// double calulateArea()
//
// Purpose:             Calculates the area of the circle based on distance found
// Output:          Prints area.
// Precondition:        Distance function runs properly.
// Postcondition:   None.
//********************************************************

double calculateArea()
{
    double radius = calculateDistance()/2;

    printf("The area of the city encompassed by your request is %.3lf\n", (PI * pow(radius, 2)));

    return 3;
}

//********************************************************
// double calculateWidth()
//
// Purpose:             Uses distance function to display width.
// Output:          Prints width, which is same as distance in this shape.
// Precondition:        Distance function runs properly.
// Postcondition:   None.
//********************************************************

double calculateWidth()
{
    //width would just be distance
    double width = calculateDistance();
    
    printf("The width of the city encompassed by your request is %.3lf\n", width);

    return 1;
}

//********************************************************
// double calculateHeight()
//
// Purpose:             Finds height of shape according to points inputted.
// Output:          Prints height which is equal to distance for a circle.
// Precondition:        Distance function runs properly.
// Postcondition:   None.
//********************************************************

double calculateHeight()
{
    //height is just distance/diameter
    double height = calculateDistance();
    printf("The height of the city encompassed by your request is %.3lf\n", height);

    return 1;
}

//********************************************************
// int main(int argc, char**argv)
//
// Purpose:             Runs all functions in correct order.
// Output:          None.
// Precondition:        None.
// Postcondition:   None.
//********************************************************


int main(int argc, char**argv)
{
    //call functions in correct order
    calculateDistance();
    
    calculatePerimeter();

    calculateArea();

    calculateWidth();

    calculateHeight();

    return 0;
}
