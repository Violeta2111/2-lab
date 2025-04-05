#include <stdio.h>
#include <math.h>

int main() {
    int y, z;
    double t;

    printf("Введіть значення цілого числа y: ");
    scanf("%d", &y);

    printf("Введіть значення цілого числа z: ");
    scanf("%d", &z);

    // Перевірка на нуль у знаменнику
    if (z - 2 * y == 0) {
        printf("Помилка: знаменник (z - 2y) дорівнює нулю.\n");
        return 1;
    }

    // Обчислення виразу під коренем
    double fraction = 3.0 * y / (z - 2.0 * y);
    double expression = fraction - y * z;

    // Перевірка, щоб уникнути sqrt з від'ємного
    if (expression < 0) {
        printf("Помилка: підкореневий вираз від’ємний: %.3f\n", expression);
        return 1;
    }

    // Обчислення кореня
    t = sqrt(expression);

    printf("Значення функції t = %.3f\n", t);

    return 0;
}