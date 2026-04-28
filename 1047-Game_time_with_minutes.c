#include <stdio.h>

int main() {
    int start, end, st_min, end_min, duration, dur_min;
    scanf("%d%d%d%d", &start, &st_min, &end, &end_min);

    duration = end - start;
    dur_min  = end_min - st_min;

    // If minutes are negative, borrow 1 hour
    if (dur_min < 0) {
        dur_min += 60;
        duration--;
    }

    // If game crossed midnight
    if (duration < 0)
        duration += 24;

    // If same time, game lasted 24 hours (max duration)
    if (duration == 0 && dur_min == 0)
        duration = 24;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duration, dur_min);

    return 0;
}