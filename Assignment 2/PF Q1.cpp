/**
* Programmer:Zoya
* Program:Cinema Hall Seat Booking Management System
* Date:6 Nov 2026
*/

#include <stdio.h>
int main(){
    int seats[50][50];
    int rows,columns;
    int i,j;
    int available,total = 0;
    int k,count,start;
    int middle,distance;
    int found = 0;
    int bookingRow = -1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of seats per row: ");
    scanf("%d", &columns);

    while(rows<=0 || rows>50 || columns<=0 || columns>50){
        printf("Invalid size. Enter again \n");

        printf("Enter number of rows: ");
        scanf("%d", &rows);

        printf("Enter number of seats per row: ");
        scanf("%d", &columns);
    }

    // Input the seating arrangement
    for(i=0; i<rows; i++){
        printf("Enter seats for row %d (0 for available,1 for booked): \n",i);

        for(j=0; j<columns; j++){
            scanf("%d", &seats[i][j]);

            while(seats[i][j] != 0 && seats[i][j] != 1){
                printf("Enter only 0 or 1: ");
                scanf("%d", &seats[i][j]);
            }
        }
    }

    // Display seating arrangement
    printf("\nSeating Arrangement: \n");

    printf("      ");
    for(j=0; j<columns; j++){
        printf("%d ", j);
    }
	printf("\n");

    for(i=0; i<rows; i++){
        printf("Row %d ", i);

        for(j=0; j<columns; j++){
            if(seats[i][j] == 0){
                printf("_");
            }
            else{
                printf("X");
            }
        }
        printf("\n");
    }

    // Count available seats
    printf("Available seats in each row: \n");

    for(i=0; i<rows; i++){
        available = 0;

        for(j=0; j<columns; j++){
            if (seats[i][j] == 0){
                available++;
            }
        }

        printf("Row %d: %d available seats\n", i, available);
        total = total + available;
    }

    printf("Total available seats:%d \n", total);

    // Group booking
    printf("Enter number of customers: ");
    scanf("%d", &k);

    while(k<=0 || k>columns){
        printf("Invalid group size. Enter again: ");
        scanf("%d", &k);
    }

    middle = rows/2;

    // Search rows starting from the middle
    for(distance=0; distance<rows && found==0; distance++){
	
        for(int side=0; side<2 && found==0; side++){
            int r;

            if(side == 0){
                r = middle-distance;
            }
            else{
                r = middle+distance;
            }

            if(r >= 0 && r < rows){
                count = 0;

                for(j=0; j<columns; j++){
                    if(seats[r][j] == 0){
                        count++;
                    }
                    else{
                        count = 0;
                    }

                    if(count == k){
                        start = j-k + 1;
                        bookingRow = r;
                        found = 1;
                        break;
                    }
                }
            }
        }
    }

    // Confirm booking
    if(found == 1){
        printf("Booking successful! \n");
        printf("Allocated row: %d\n", bookingRow);

        printf("Allocated seat numbers: ");

        for(j=start; j<start+k; j++){
            seats[bookingRow][j] = 1;
            printf("%d ", j);
        }

        printf("Updated Seating Arrangement: \n");

        printf("     ");
        for(j=0; j<columns; j++){
            printf("%d ", j);
        }

        printf("\n");

        for(i=0; i<rows; i++){
            printf("Row %d ", i);

            for(j=0; j<columns; j++)
            {
                if (seats[i][j] == 0){
                    printf("_ ");
                }
                else{
                    printf("X ");
                }
            }

            printf("\n");
        }

        total = total-k;

        printf("Remaining available seats:%d \n", total);
    }
    else{
        printf("Sorry! No consecutive seats are available \n");
    }

    return 0;
}

