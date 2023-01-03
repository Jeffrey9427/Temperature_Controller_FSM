#include <stdio.h> 

void nextState(int q1, int q0, int t, int b, int* Q1, int* Q0, int* o0, int* o1) {
    *Q1 = (t & (!b)) | (q1 & (!q0)) | (t & (!q1)) | ((!b) & (!q1) & q0);
    *Q0 = (t & (!b)) | ((!t) & (!q1) & q0) | ((!t) & b & (!q0)) | (b & q1 & (!q0)); 
    // *o0 = (*Q1 & *Q0) | ((!*Q1) & (!*Q0));
    // *o1 = ((!Q1) & Q0) | (Q1 & (!Q0));
}

void output(int q1, int q0, int* o0, int* o1) {
    *o0 = (q1 & q0) | ((!q1) & (!q0));
    *o1 = ((!q1) & q0) | (q1 & (!q0));
}