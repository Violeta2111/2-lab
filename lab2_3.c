#include <stdio.h>
#include <math.h>

int main() {
    int y, z;
    double t;

    printf("Введіть значення цілого числа y: ");
    scanf("%d", &y);

    printf("Введіть значення цілого числа z: ");
    scanf("%d", &z);


    // Обчислення виразу під коренем
    double fraction = 3.0 * y / (z - 2.0 * y);
    double expression = fraction - y * z;


    // Обчислення кореня
    t = sqrt(expression);

    printf("Значення функції t = %.3f\n", t);

    return 0;
}