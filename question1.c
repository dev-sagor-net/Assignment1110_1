#include <stdio.h>
#include <math.h>

int main() {
    int p, q, x, y;
    int r;
    double s, area;

    printf("Enter four integers (p, q, x, y): ");
    // Reading inputs: p, q, x, y
    if (scanf("%d %d %d %d", &p, &q, &x, &y) != 4) {
        return 1;
    }

    // Determine the value of r
    r = x % y;

    // Check if the side lengths can form a valid triangle
    if ((p + q > r) && (p + r > q) && (q + r > p)) {
        // Calculate half-perimeter (s)
        s = (p + q + r) / 2.0;

        // Calculate area using Heron's Formula
        area = sqrt(s * (s - p) * (s - q) * (s - r));

        printf("Area: %.3f\n", area);
    } else {
        printf("Invalid Triangle Sides\n");
    }

    return 0;
}
