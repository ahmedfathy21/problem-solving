#include <stdio.h>
#include <stdlib.h>

/*int get_val(int r, int c, int n, int sz) {
    if (r >= n) {
        r = sz - r;
    }
    if (c >= n) {
        c = sz - c;
    }
    return n - (r < c ? r : c);
}

int main()
{
    int n;
    scanf("%d", &n);
    // Complete the code to print the pattern.

    int sz = (n - 1) * 2;
    for (int r = 0; r <= sz; ++r) {
        for (int c = 0; c <= sz; ++c) {
            if (c > 0) printf(" ");
            printf("%d", get_val(r, c, n, sz));
        }
        printf("\n");
    }
    return 0;*/
    int main(){
int n;
int val;
scanf("%i",&n);
   int i, j;
for (i = 1; i < 2 * n; i++)
{
    for (j = 1; j < 2 * n; j++)
    {

        if (abs(i - n) > abs(j - n))
        {
            val = 1 + abs(i - n);
        }
        else
        {
            val = 1 + abs(j - n);
        }
        printf("%d ", val);
    }
    printf("\n");
}
return 0;
}

