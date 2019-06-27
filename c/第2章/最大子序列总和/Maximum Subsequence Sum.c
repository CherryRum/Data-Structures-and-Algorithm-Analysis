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
    
    return 0;
}
