#include "stdio.h"
#include "math.h"
#include <stdbool.h>
#include "string.h"

struct SDistance {
    int feet;
    float inch;
};

struct SDistance add_distances(struct SDistance d1, struct SDistance d2) {
    struct SDistance sum;
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    if (sum.inch >= 12) {
        sum.feet++;
        sum.inch -= 12;
    }

    return sum;
}

int main() {
    struct SDistance d1, d2, sum;
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);
    printf("Enter information for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);
    sum = add_distances(d1, d2);
    printf("Sum of distances=%d'-%.1f\"\n", sum.feet, sum.inch);

    return 0;
}