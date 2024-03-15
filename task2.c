#include <stdio.h>
#include <math.h>
#define SASE 6
#define FIFTEEN 15
#define SIXTEEN 16
#define THIRTY_ONE 31
#define THIRTY_TWO 32
int main() {
    unsigned int inst = 0;
    int i = 0, j = 0, v[THIRTY_TWO], N = 0, Dim = 0, binar[THIRTY_TWO] = {0};
    int operanzi[SIXTEEN] = {0}, citire = 0, k = 0;
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
    for (j = N * 2 + SASE; j >= N * 2 + 3; j --)
        Dim = (int)(Dim + (v[j] * pow(2, ((N * 2 + SASE)-j))));
    Dim = Dim + 1;
    // task2
    int n = 0;
    if (((N + 1) * Dim) % SIXTEEN == 0)
        citire = citire + ((N + 1) * Dim) / SIXTEEN;
    else
        citire = ((N + 1) * Dim) / SIXTEEN + 1;
    unsigned short oper = 0;
    for (k = 0; k < citire; k ++) {
        scanf("%hu", &oper);
            for (i = FIFTEEN; i >= 0; i --) {
                if (((1 << i)&oper) == 0)
                    binar[FIFTEEN - i] = 0;
                else
                    binar[FIFTEEN - i] = 1;
            }
            for (j = 0; j <= FIFTEEN; j += Dim) {
                for (i = j + Dim - 1; i >= j; i --)
                    operanzi[n] += (int)((binar[i] * pow(2, (j + Dim - 1 - i))));
                n++;
            }
    }
    int rezultat = operanzi[0];
    int x = 1;
        for (j = 3; j <= N * 2 + 2; j = j + 2) {
            if (v[j] == 0 && v[j + 1] == 0)
                rezultat += operanzi[x];
            else if (v[j] == 0 && v[j + 1] == 1)
                rezultat -= operanzi[x];
            else if (v[j] == 1 && v[j + 1] == 0)
                rezultat *= operanzi[x];
            else if (v[j] == 1 && v[j + 1] == 1)
                rezultat /= operanzi[x];
        x++;
        }
    printf("%d\n", rezultat);
return 0;
}
