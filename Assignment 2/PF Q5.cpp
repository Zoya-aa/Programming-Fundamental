/**
* Programmer:Zoya
* Program:University Library Management System
* Date:7 Nov 2026
*/


#include <stdio.h>
#include <string.h>

void displayMenu(){
	printf("\n");
    printf("===== LIBRARY MENU =====\n");
    printf("1. Register Member \n");
    printf("2. Display Available Books \n");
    printf("3. Borrow a Book \n");
    printf("4. Return a Book \n");
    printf("5. Display Member Record \n");
    printf("6. Exit \n");
    printf("Enter your choice: ");
}

void registerMember(char name[],int *studentID,int *memberType){
	printf("\n");
    printf("Enter member name: ");
    scanf(" %49[^\n]", name);

    printf("Enter student ID: ");
    scanf("%d", studentID);

    printf("Enter membership type (1 for Student,2 for Faculty): ");
    scanf("%d", memberType);

    while(*memberType!=1 && *memberType!=2){
        printf("Invalid membership type.Enter again: ");
        scanf("%d", memberType);
    }
    printf("\n");
    printf("Member registered successfully! \n");
}

void displayBooks(int bookIDs[],char bookTitles[][50],int availableCopies[],int totalBooks){
    int i;
    printf("\n");
    printf("===== AVAILABLE BOOKS =====\n");
    printf("ID\tTitle\t\t\tCopies\n");

    for(i=0; i<totalBooks; i++){
        printf("%d\t%-25s %d\n",bookIDs[i],bookTitles[i],availableCopies[i]);
    }
}

void borrowBook(int bookIDs[],char bookTitles[][50],int availableCopies[],int totalBooks,int borrowedBookIDs[],int *borrowedCount,int memberType){
    int id;
    int days;
    int i;
    int found = 0;
    int allowedDays;

    if(*borrowedCount>=3){
    	printf("\n");
        printf("You cannot borrow more than 3 books at a time \n");
        return;
    }
    printf("\n");
    printf("Enter book ID: ");
    scanf("%d", &id);

    for(i=0; i<totalBooks; i++){
        if(bookIDs[i]==id){
            found = 1;
            break;
        }
    }

    if(found==0){
        printf("Invalid book ID \n");
    }
    else if(availableCopies[i]==0){
        printf("Sorry!This book is not available \n");
    }
    else{
        printf("Enter number of days you want to keep the book: ");
        scanf("%d", &days);

        while(days<=0){
            printf("Enter a positive number of days: ");
            scanf("%d", &days);
        }

        borrowedBookIDs[*borrowedCount] = id;
        (*borrowedCount)++;

        availableCopies[i]--;

        if(memberType==1){
            allowedDays = 14;
        }
        else{
            allowedDays = 30;
        }

        printf("\nBook borrowed successfully! \n");
        printf("Book title: %s\n", bookTitles[i]);
        printf("Allowed borrowing period: %d days\n", allowedDays);
    }
}

float returnBook(int bookIDs[],int availableCopies[],int totalBooks,int borrowedBookIDs[],int *borrowedCount,int memberType,float *totalFine){
    int id;
    int days;
    int i,j;
    int found = 0;
    int bookIndex = -1;
    int allowedDays;
    int extraDays;
    char code[20];
    float fine = 0;
    float payableFine = 0;

    printf("\nEnter book ID to return: ");
    scanf("%d", &id);

    for(i=0; i<*borrowedCount; i++){
        if(borrowedBookIDs[i]==id){
            found = 1;
            break;
        }
    }

    if(found==0){
        printf("You have not borrowed this book \n");
        return 0;
    }

    for(j=0; j<totalBooks; j++){
        if(bookIDs[j]==id){
            bookIndex = j;
            break;
        }
    }

    printf("Enter actual number of days book was kept: ");
    scanf("%d", &days);

    while(days<=0){
        printf("Enter a positive number of days: ");
        scanf("%d", &days);
    }

    if(memberType==1){
        allowedDays = 14;
    }
    else{
        allowedDays = 30;
    }

    if(days>allowedDays){
        extraDays = days - allowedDays;

        if(memberType==1){
            fine = extraDays*20;
        }
        else{
            fine = extraDays*10;
        }

        printf("\nLate fine before waiver: Rs. %.2f \n", fine);

        printf("Enter membership code for 50%% waiver: ");
        scanf("%19s", code);

        if(strcmp(code,"LIB2026")==0){
            payableFine = fine/2;
            printf("Correct code! 50%% waiver applied \n");
        }
        else{
            payableFine = fine;
            printf("Incorrect code.No waiver applied \n");
        }
    }
    else{
        payableFine = 0;
        printf("\nBook returned on time.No fine.\n");
    }

    *totalFine = *totalFine+fine;

    // Remove the returned book from the borrowing list
    for(i=0; i<*borrowedCount; i++){
        if(borrowedBookIDs[i]==id){
            for(j=i; j<*borrowedCount-1; j++){
                borrowedBookIDs[j] = borrowedBookIDs[j+1];
            }

            (*borrowedCount)--;
            break;
        }
    }

    availableCopies[bookIndex]++;

    printf("Book returned successfully! \n");
    printf("Fine payable: Rs. %.2f\n", payableFine);

    return payableFine;
}

void displayMemberRecord(char name[],int studentID,int memberType,int borrowedBookIDs[],int borrowedCount,float totalFine,float fineAfterWaiver){
    int i;

    printf("\n");
    printf("===== MEMBER RECORD =====\n");

    printf("Name: %s\n", name);
    printf("Student ID: %d\n", studentID);
 
    if(memberType==1){
        printf("Membership Type: Student \n");
    }
    else{
        printf("Membership Type: Faculty \n");
    }

    printf("\nCurrently borrowed books: \n");

    if(borrowedCount==0){
        printf("No books currently borrowed \n");
    }
    else{
        for(i=0; i<borrowedCount; i++){
            printf("%d\n", borrowedBookIDs[i]);
        }
    }

    printf("\nTotal fine before waiver: Rs. %.2f\n", totalFine);
    printf("Final fine payable: Rs. %.2f\n", fineAfterWaiver);
}

int main(){
    int bookIDs[4] = {101,102,103,104};

    char bookTitles[4][50] ={
        "Programming in C",
        "Data Structures",
        "Database Systems",
        "Computer Networks"
    };

    int availableCopies[4] = {5,3,0,4};

    char name[50];
    int studentID = 0;
    int memberType = 0;

    int borrowedBookIDs[3];
    int borrowedCount = 0;

    int choice;
    int registered = 0;

    float totalFine = 0;
    float fineAfterWaiver = 0;
    float currentFine;

    do{
        displayMenu();
        scanf("%d", &choice);

        switch(choice){
            case 1:
                registerMember(name,&studentID,&memberType);
                registered = 1;
                break;

            case 2:
                displayBooks(bookIDs,bookTitles,availableCopies,4);
                break;

            case 3:
                if(registered==0){
                    printf("Please register first \n");
                }
                else{
                    borrowBook(bookIDs,bookTitles,availableCopies,4,borrowedBookIDs,&borrowedCount,memberType);
                }
                break;

            case 4:
                if(registered==0){
                    printf("Please register first \n");
                }
                else{
                    currentFine = returnBook(bookIDs,availableCopies,4,borrowedBookIDs,&borrowedCount,memberType,&totalFine);

                    fineAfterWaiver = fineAfterWaiver+currentFine;
                }
                break;

            case 5:
                if(registered==0){
                    printf("Please register first \n");
                }
                else{
                    displayMemberRecord(name,studentID,memberType,borrowedBookIDs,borrowedCount,totalFine,fineAfterWaiver);
                }
                break;

            case 6:
                printf("\nExiting program.Thank you! \n");
                break;

            default:
                printf("\nInvalid choice.Try again \n");
        }

    }while(choice!=6);

    return 0;
}

