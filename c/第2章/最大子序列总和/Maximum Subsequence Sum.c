#include<stdio.h>
int
    MaxSubsequenceSum(const int A[], int length){
        int ThisSum, MaxSum;
        ThisSum = MaxSum =0;
    for(int i=0;i<MaxSum;i++){
        ThisSum += A[i];
        if(ThisSum > MaxSum)
            MaxSum  = ThisSum;
        else if(ThisSum<0)
            ThisSum = 0;
    }
    return MaxSum;
}
int main(void){
    int text[] = {2,-5,55,-896,-98,88,88,556,5-885,-596,-8,884,598};
    
    return 0;
}
