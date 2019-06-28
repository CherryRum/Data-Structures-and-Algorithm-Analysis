#include<stdio.h>
int
    MaxSubsequenceSum(const int A[], int length){
        int ThisSum, MaxSum;
        ThisSum = MaxSum =0;
    for(int i=0;i<length;i++){
        ThisSum += A[i];
        if(ThisSum > MaxSum)
            MaxSum  = ThisSum;
        else if(ThisSum<0)
            ThisSum = 0;
    }
    return MaxSum;
}
int main(void){
    int text[] = {2,-5,5,-6,-98,88,8,5,5,-8,-6,-8,4,5,22};
    int a = MaxSubsequenceSum(text,13);
    printf("%d\n",a);
    return 0;
}
