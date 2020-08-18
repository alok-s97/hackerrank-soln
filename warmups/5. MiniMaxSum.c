#include <stdio.h>

int main() {
    long int a[5], max, min, sum=0;
    int i=0;

    scanf("%ld", &a[0]);

    max = a[0];
    min = a[0];
    sum += a[0];

    for (i=1;i<5;i++){
        scanf("%ld", &a[i]);
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
        sum += a[i];
    }

    printf("%ld %ld", sum-max, sum-min);

}
