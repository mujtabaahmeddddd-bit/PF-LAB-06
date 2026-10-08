#include <stdio.h>

int main() {
    int age;
    int category;
    int day;
    float price;

    while (1) {
        printf("Enter customer age (0 to stop): ");
        scanf("%d", &age);

        if (age == 0) {
            printf("Line is empty for the day.\n");
            break;
        }

        printf("Enter category (1: Regular, 2: 3D, 3: Premiere): ");
        scanf("%d", &category);

        switch (category) {
            case 1:
                price = 500;
                break;
            case 2:
                price = 800;
                break;
            case 3:
                price = 1200;
                break;
            default:
                price = 500;
                break;
        }

        if (age < 13) {
            price = price - (price * 0.30);
        } else if (age >= 60) {
            price = price - (price * 0.20);
        }

        printf("Enter day of month (1-31): ");
        scanf("%d", &day);

        if (day % 5 == 0) {
            price = price - 50;
        }

        if (price < 100) {
            price = 100;
        }

        printf("Final Ticket Price: Rs. %.2f\n\n", price);
    }

    return 0;
}