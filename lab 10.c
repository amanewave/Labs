#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define AVERAGE(arr, count) ({ \
    double sum = 0; \
    for(int i = 0; i < count; i++) { \
        sum += arr[i]; \
    } \
    sum / count; \
})

int main() {
    int count;
    printf("vvedite razmer massiva: ");
    scanf("%d", &count);

    double arr[count];
    printf("vvedite elementi cherez probel: ");
    for(int i = 0; i < count; i++) {
        scanf("%lf", &arr[i]);
    }

    double max = arr[0];
    for(int i = 1; i < count; i++) {
        max = MAX(max, arr[i]);
    }

    double avg = AVERAGE(arr, count);

    printf("max: %.2f\n", max);
    printf("avg: %.2f\n", avg);

    return 0;
}
//sdana
