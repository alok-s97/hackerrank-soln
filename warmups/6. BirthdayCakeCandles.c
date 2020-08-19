#include <stdio.h>

int main() {
    int n;
    int max = 0;
    scanf("%d", &n);
    int candles[n];
    int count = 0;

    for (int i=1; i<=n; i++){
        scanf("%d", &candles[i]);
        if (max < candles[i])
            max = candles[i];
    }

    for (int i=1; i<=n; i++){
        if (candles[i] == max)
            count++;
    }

    printf("%d", count);

    return 0;
}
