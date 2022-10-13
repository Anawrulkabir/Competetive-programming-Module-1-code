//problem link - https://algo.codemarshal.org/contests/icpc-dhaka-preli-2017/problems/F

#include<stdio.h>
int main(){       
    int P, Q, Y, result;
    scanf("%d%d%d", &P, &Q, &Y);
    result = Y * 52 * ( 5 * P  + 2 * Q );
    printf("%d\n", result);
    return 0;
}
