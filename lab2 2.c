#include <stdio.h>
#include <math.h>  // для функції pow()

int main() {
    int a = 5;
    int b = 7;
    int c = 5;
    double y;

    // Розрахунок чисельника та знаменника
    double numerator = a + 4 * b - pow(c, 2);
    double denominator = 2 * a * b * c;

    // Перевірка на ділення на нуль
    if (denominator == 0) {
        printf("Помилка: знаменник дорівнює нулю.\n");
        return 1;
    }

    // Обчислення результату
    y = numerator / denominator;

    // Виведення результату
    printf("Обчислення виразу y = (a + 4b - c^2) / (2abc)\n");
    printf("При a = %d, b = %d, c = %d\n", a, b, c);
    printf("Значення виразу y = %.4f\n", y);

    return 0;
}