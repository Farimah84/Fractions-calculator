#include <stdio.h>

struct fraction {
    int s;   // Numerator
    int m;   // Denominator
};

struct fraction multiply(struct fraction a, struct fraction b) {
    struct fraction result;
    result.s = a.s * b.s;
    result.m = a.m * b.m;
    return result;
}

struct fraction divide(struct fraction a, struct fraction b) {
    struct fraction result;
    result.s = a.s * b.m;
    result.m = a.m * b.s;
    return result;
}

struct fraction add(struct fraction a, struct fraction b) {
    struct fraction result;
    result.s = a.s * b.m + b.s * a.m;
    result.m = a.m * b.m;
    return result;
}

struct fraction subtract(struct fraction a, struct fraction b) {
    struct fraction result;
    result.s = a.s * b.m - b.s * a.m;
    result.m = a.m * b.m;
    return result;
}

int main() {
    struct fraction first, second, result;

    printf("Enter the numerator and denominator of the first fraction: ");
    scanf("%d %d", &first.s, &first.m);

    printf("Enter the numerator and denominator of the second fraction: ");
    scanf("%d %d", &second.s, &second.m);

    // Multiplication
    result = multiply(first, second);
    printf("Multiplication: %d/%d\n", result.s, result.m);

    // Division
    result = divide(first, second);
    printf("Division: %d/%d\n", result.s, result.m);

    // Addition
    result = add(first, second);
    printf("Addition: %d/%d\n", result.s, result.m);

    // Subtraction
    result = subtract(first, second);
    printf("Subtraction: %d/%d\n", result.s, result.m);

    return 0;
}
