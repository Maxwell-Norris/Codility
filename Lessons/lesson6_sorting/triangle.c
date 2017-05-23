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
    
    if(N < 3) return 0;

    qsort(A, N, sizeof(*A), compare);
    
    for(int i = 2; i < N; ++i) {
	// Cast to long to handle MAXINTs
        if( (long)A[i-1] + (long)A[i-2] > A[i]) return 1;
    }
    
    return 0;
}