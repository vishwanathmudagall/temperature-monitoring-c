#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int temp, threshold = 40;

    srand(time(NULL));

    printf("Temperature Monitoring Simulation\n");
    printf("--------------------------------\n");

    for (int i = 1; i <= 10; i++) {
        temp = rand() % 60;  // random value 0–59
        printf("Reading %d: %d°C\n", i, temp);

        if (temp > threshold) {
            printf("ALERT: Temperature crossed threshold! ⚠️\n");
        }
    }

    return 0;
}
