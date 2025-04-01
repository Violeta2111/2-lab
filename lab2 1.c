#include <stdio.h>

int main() {
    int num1, num2;
    
    // Введення двох цілих чисел
    printf("Введіть перше ціле число: ");
    scanf("%d", &num1);
    
    printf("Введіть друге ціле число: ");
    scanf("%d", &num2);
    
    // Обчислення та виведення результатів
    printf("Ціла частина від ділення %d на %d: %d\n", num1, num2, num1 / num2);
    printf("Сума квадратів %d і %d: %d\n", num1, num2, num1 * num1 + num2 * num2);
    printf("Добуток суми і різниці %d та %d: %d\n", num1, num2, (num1 + num2) * (num1 - num2));

    return 0;
}