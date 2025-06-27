#include <stdio.h>

void celsiusToFahrenheit(float c) {
    printf("%.2f°C = %.2f°F\n", c, (c * 9 / 5) + 32);
}

void fahrenheitToCelsius(float f) {
    printf("%.2f°F = %.2f°C\n", f, (f - 32) * 5 / 9);
}

void celsiusToKelvin(float c) {
    printf("%.2f°C = %.2fK\n", c, c + 273.15);
}

int main() {
    int choice;
    float temp;

    printf("🌡️ Temperature Converter\n");
    printf("-------------------------\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            celsiusToFahrenheit(temp);
            break;
        case 2:
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            fahrenheitToCelsius(temp);
            break;
        case 3:
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            celsiusToKelvin(temp);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
