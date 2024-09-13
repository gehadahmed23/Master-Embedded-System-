#include <stdio.h>

struct SComplexNum {
    float real;
    float imag;
};

struct SComplexNum add_complex(struct SComplexNum num1, struct SComplexNum num2) {
    struct SComplexNum sum;
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    return sum;
}

int main() {
    struct SComplexNum num1, num2, sum;

    printf("For 1st complex number\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("For 2nd complex number\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f", &num2.real, &num2.imag);

    sum = add_complex(num1, num2);

    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imag);

    return 0;
}