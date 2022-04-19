#include <stdio.h>
void printArr( const int a[], size_t n, const char *s ) {
    printf( "%s", s );
    for (size_t i = 0; i < n; i++ ) {
        printf( "%d, ", a[i] );
    }
    printf("]");
    putchar('\n' );
}

void swapArray( int *a, int *b, size_t n ) {
    for ( size_t i = 0; i < n; i++ )
    {
        int tmp = a[i];
        a[i] = b[i];
        b[i] = tmp;
    }
}
int func(int*i, int*j){
    int tmp;
    tmp = *i;
    *i = *j;
    *j = tmp;
    printf("NO.1----------------\n");
}

int main(){
    int n, m;
    n = 1;
    m = 2;
    func(&n, &m);
    printf("after swap, n=%d, m=%d\n", n, m);
    printf("NO.2----------------\n");
    enum { N = 10 };
    int a[N] = { 0, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int b[N] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    swapArray( a, b, N );
    printArr( a, N, "after swap array, source array = [" );
    printArr( b, N, "after swap array, dest array = [" );
    

    return 0;
    return 0;
}

