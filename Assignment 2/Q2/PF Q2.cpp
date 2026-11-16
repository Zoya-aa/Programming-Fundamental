/**
* Programmer:Zoya
* Program:Cinema Hall Seat Booking Management System
* Date:6 Nov 2026
*/

#include <stdio.h>

// Function to calculate sum of proper divisors
int sumDivisors(int num){
    int i;
    int sum = 0;

    for(i=1; i <= num/2; i++){
        if(num%i == 0){
            sum = sum+i;
        }
    }
    return sum;
}

int main(){
    int n;
    int i,second;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n <= 0){
        printf("Enter a positive number: ");
        scanf("%d", &n);
    }
    printf("\nAmicable pairs up to %d:\n", n);

    for(i=2; i<=n; i++){
        second = sumDivisors(i);

        if(second>i && second<=n){
            if(sumDivisors(second) == i){
                printf("(%d, %d)\n", i,second);
                count++;
            }
        }
    }

    if(count == 0){
        printf("No amicable pairs found \n");
    }

    printf("Total amicable pairs:%d \n", count);

    return 0;
}

