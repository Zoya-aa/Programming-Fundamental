/**
* Programmer:Zoya
* Program:Bakery Festival Sales Management System
* Date:7 Nov 2026
*/

#include <stdio.h>

int getValidDays(){
    int days;

    printf("Enter number of festival days: ");
    scanf("%d", &days);

    while(days<1 || days>7){
        printf("Invalid input.Enter days between 1 and 7: ");
        scanf("%d", &days);
    }
    return days;
}

float calculateDailySales(int dayNumber){
    int orders;
    int i;
    float amount;
    float total = 0;
    float average;
    float highest = 0;

    printf("\nDay %d Number of orders: ",dayNumber);
    scanf("%d", &orders);

    for(i=1; i<=orders; i++){
        printf("Enter amount for order %d: ", i);
        scanf("%f", &amount);

        while(amount<=0){
            printf("Invalid amount.Enter again: ");
            scanf("%f", &amount);
        }

        total = total+amount;

        if(amount>highest){
            highest = amount;
        }
    }

    average = total/orders;

    printf("\nTotal sales: Rs. %.2f\n", total);
    printf("Average order: Rs. %.2f\n", average);
    printf("Highest order: Rs. %.2f\n", highest);
 
    return total;
}

int findHighestSalesDay(float dailySales[],int numberOfDays){
    int i;
    int highestDay = 1;
    float highest = dailySales[0];

    for(i=1; i<numberOfDays; i++){
        if(dailySales[i]>highest){
            highest = dailySales[i];
            highestDay = i+1;
        }
    }
    return highestDay;
}

void displayBarChart(float dailySales[],int numberOfDays){
    int i,j;
    int stars;
    
    printf("\n");
    printf("======= DAILY SALES BAR CHART =======\n");

    for(i=0; i<numberOfDays; i++){
        stars = dailySales[i]/100;

        printf("Day %d: ", i+1);

        for(j=1; j<=stars; j++){
            printf("*");
        }

        printf("(Rs.%.2f)\n", dailySales[i]);
    }
}

int main(){
    int days;
    int i;
    int highestDay;
    float dailySales[7];
    float totalSales = 0;

    days = getValidDays();

    for(i=0; i<days; i++){
        dailySales[i] = calculateDailySales(i+1);
        totalSales = totalSales+dailySales[i];
    }

    highestDay = findHighestSalesDay(dailySales,days);
    printf("\n");
    printf("======= FESTIVAL SUMMARY =======\n");
    printf("Total festival sales: (Rs.%.2f)\n", totalSales);
    printf("Day with highest sales: Day%d\n", highestDay);
    printf("Highest daily sales: (Rs.%.2f)\n", dailySales[highestDay-1]);
 
    displayBarChart(dailySales,days);

    return 0;
}

