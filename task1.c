#include <stdio.h>
#include <math.h>
#define SIX 6
#define THIRTY_ONE 31
#define THIRTY_TWO 32
int main() {
    unsigned int inst = 0;
    int i = 0, j = 0, v[THIRTY_TWO], N = 0, Dim = 0;
    scanf("%u", &inst);

    for (i = THIRTY_ONE; i >= 0; i --) {
        j = THIRTY_ONE - i;
        if (((1 << i)&inst) == 0)
            v[j] = 0;
        else
            v[j] = 1;
    }
    for (j = 2; j >= 0; j --)
        N = (int)(N + (v[j] * pow(2, (2 - j))));
    N = N + 1;
    printf("%d ", N);
    for (j = 3; j <= N * 2 + 2; j = j + 2) {
        if (v[j] == 0 && v[j + 1] == 0)
            printf("+ ");
        else if (v[j] == 0 && v[j + 1] == 1)
            printf("- ");
        else if (v[j] == 1 && v[j + 1] == 0)
            printf("* ");
        else if (v[j] == 1 && v[j + 1] == 1)
            printf("/ ");
    }
    for (j = N * 2 + SIX; j >= N * 2 + 3; j --)
        Dim = (int)(Dim + (v[j] * pow(2, ((N * 2 + SIX) - j))));
    Dim = Dim + 1;
    printf("%d\n", Dim);
return 0;
}
