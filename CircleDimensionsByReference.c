#include<stdio.h>
#include<math.h>
#define PI 3.14
/* One function to pass r by value, calculate area, circumference, diameter;
printf in main() */
void CalculateCircleByReference(double radius, double *area, double *diameter, double *circumference) {

    //printf("Enter radius: ");
    //scanf("%f",radius);
    *area = PI * (radius * radius);
    *circumference = 2 * PI * radius;
    *diameter = 2 * radius;


}


int main()
{
    double area, circumference, radius=5, diameter, area1, circumference1, diameter1;

    CalculateCircleByReference(radius, &area1, &diameter1, &circumference1);

    printf("area is %f\n",area1);
    printf("Circumference is %f\n",circumference1);
    printf("diameter is %f\n",diameter1);
}
