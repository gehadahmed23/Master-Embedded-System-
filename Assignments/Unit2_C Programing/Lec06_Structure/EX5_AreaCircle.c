#include "stdio.h"

#define PI 3.14159
#define AREA_OF_CIRCLE(r) (PI * r * r)

int main() {
    float radius, area;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = AREA_OF_CIRCLE(radius);

    printf("Area=%.2f\n", area);

    return 0;
}