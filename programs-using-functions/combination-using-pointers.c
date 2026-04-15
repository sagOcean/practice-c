#include <stdio.h>
# define false 's'

void combination(int x,int y,int* fact1,int* fact2,int* fact3){

    int i;

    for(i=1;i<= x; i++){
        *fact1 = *fact1 * i;
    }

    for(i = 1;i<= (x-y);i++){
        *fact2 = *fact2 * i;
    }
    for(i=1;i<=y;i++){
        *fact3 = *fact3 * i;
    }


    

}

int main() {
    // 1. Initialize variables to hold the results
    int a = 1, b = 1, c = 1, n, r;
    int comb;

    // (Deleted the unused 'int* fact1...' lines)

    printf("enter 2 inputs for combination: ");
    scanf("%d %d", &n, &r);

    // 2. This function call updates a, b, and c directly
    combination(n, r, &a, &b, &c);

    // 3. Use a, b, and c for the calculation
    // a now holds n!, b holds (n-r)!, c holds r!
    comb = a / (b * c);

    printf("Result: %d", comb);

    return 0;
}