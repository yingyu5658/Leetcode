#include <stdlib.h>
#include <string.h>

int furthestDistanceFromOrigin(char *moves) {
    int len = strlen(moves);
    int L = 0;
    int R = 0;
    int B = 0;

    for (int i = 0; i < len; i++) {
        if (moves[i] == 'L') {
            L++;
        } else if (moves[i] == 'R') {
            R++;
        } else {
            B++;
        }
    }

    return abs(L - R) + B;
}
