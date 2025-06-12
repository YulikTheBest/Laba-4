#include <stdio.h>

int main() {
    int n;
    double x, sum = 0.0;

    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    printf("Введіть дійсне число x: ");
    scanf("%lf", &x);

    for (int i = 1; i <= n; i++) { // Цикл для перебору від 1 до n
        for (int j = 1; j <= n; j++) { //   Цикл для перебору від 1 до n
            sum += (x + i) / j; // Обчислення подвійної суми
        } // Завершення внутрішнього циклу
    }

    printf("Результат подвійної суми: %.2lf\n", sum);
    return 0;
}
