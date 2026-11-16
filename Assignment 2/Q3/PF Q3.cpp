/**
* Programmer:Zoya
* Program:Cinema Hall Seat Booking Management System
* Date:6 Nov 2026
*/


#include <stdio.h>

void inputReadings(float readings[50][50], int sensors, int hours){
    int i, j;

    for(i=0; i<sensors; i++){
        printf("\nEnter readings for Sensor %d: \n", i + 1);

        for(j=0; j<hours; j++){
            printf("Hour %d: ", ++j);
            scanf("%f", &readings[i][j]);
        }
    }
}

float analyzeSensor(float readings[], int hours, int sensorNumber){
    int i;
    float total = 0,average;
    float highest = readings[0];
    float lowest = readings[0];
    int critical = 0;
    int warning = 0;
    int streak = 0;
    int longestStreak = 0;

    for(i=0; i<hours; i++){
        total = total+readings[i];

        if(readings[i] > highest){
            highest = readings[i];
        }

        if(readings[i] < lowest){
            lowest = readings[i];
        }

        if(readings[i] >= 40){
            critical++;
        }
        else if(readings[i] >= 35 && readings[i] <= 39){
            warning++;
        }

        if(readings[i] >= 35){
            streak++;

            if(streak > longestStreak){
                longestStreak = streak;
            }
        }
        else{
            streak = 0;
        }
    }

    average = total/hours;

    printf("Sensor %d Report \n", sensorNumber);
    printf("Total temperature: %.2f\n", total);
    printf("Average temperature: %.2f\n", average);
    printf("Highest temperature: %.2f\n", highest);
    printf("Lowest temperature: %.2f\n", lowest);
    printf("Critical readings: %d\n", critical);
    printf("Warning readings: %d\n", warning);
    printf("Longest streak: %d hours\n", longestStreak);

    return average;
}

int findHighestAverage(float readings[50][50], int sensors, int hours){
    int i,j;
    int highestSensor = 0;
    float total,average;
    float highestAverage = 0;

    for(i=0; i<sensors; i++){
        total = 0;

        for(j=0; j<hours; j++){
            total = total+readings[i][j];
        }

        average = total/hours;

        if(average > highestAverage){
            highestAverage = average;
            highestSensor = i;
        }
    }

    return highestSensor;
}

int main(){
    float readings[50][50];
    int sensors,hours;
    int highestSensor;
    float highestAverage = 0;
    int i;

    printf("Enter number of sensors: ");
    scanf("%d", &sensors);

    printf("Enter number of hourly readings: ");
    scanf("%d", &hours);

    while(sensors<=0 || sensors>50 || hours<=0 || hours>50){
        printf("Invalid input.Enter values between 1 and 50 \n");

        printf("Enter number of sensors: ");
        scanf("%d", &sensors);

        printf("Enter number of hourly readings: ");
        scanf("%d", &hours);
    }

    inputReadings(readings, sensors, hours);

    for(i = 0; i < sensors; i++){
        analyzeSensor(readings[i], hours, i+1);
    }

    highestSensor = findHighestAverage(readings, sensors, hours);

    for(i = 0; i < hours; i++){
        highestAverage = highestAverage+readings[highestSensor][i];
    }

    highestAverage = highestAverage/hours;

    printf("Final Report \n");
    printf("Sensor with highest average: Sensor %d\n", highestSensor+1);
    printf("Highest average temperature: %.2f\n", highestAverage);

    return 0;
}

