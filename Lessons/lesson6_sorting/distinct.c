/*
 * Written by Maxwell F. Norris
 * May 5, 2017
 */


int compare( const void* a, const void* b) {
    
    int ia = *((int*)a);
    int ib = *((int*)b);
    
    if( ia == ib) return 0;
    else if ( ia < ib ) return -1;
    else return 1;
}

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    
    if(N == 0) return 0;
    if(N == 1) return 1;
    
    qsort(A, N, sizeof(*A), compare);
    
    int result = 1;
    for (int i = 1; i < N; ++i) {
        if (A[i] != A[i-1]) result++;
    }
    
    return result;
}