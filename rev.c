#include<stdio.h>
int main(){
    int n;
    printf("enter num : ", n);
    int arr[n];
    for 
    scanf("%d", &n);

    int rev = 0, rem ;
    while(n!=0){
        rem = n%10;
        rev = rev * 10 +rem;
        n /=10;
    }
    printf("reversed num : %d" , rev);
    return 0;


}