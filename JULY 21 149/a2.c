#include<stdio.h>

int main(){
    int m1,m2,m3,m4,m5, avg, n = 5, d = 500;
    float perc;
    printf("\n----MAXIMUM MARKS IS 100----");
    printf("\nEnter the marks obtained in each subject : ");
        printf("\n Marks of first subject: ");
        scanf("%d",&m1);
        printf("\n Marks of second subject: ");
        scanf("%d",&m2);
        printf("\n Marks of third subject: ");
        scanf("%d",&m3);
        printf("\n Maks of fourth subject: ");
        scanf("%d",&m4);
        printf("\n Marks of fifth subject: ");
        scanf("%d",&m5);

    int total = (m1 + m2 + m3 + m4 + m5);
    avg = (m1 + m2 + m3 + m4 + m5)/5;
    printf("\nThe average of the marks obtained is: %d",avg);

    perc = (total * 100)/d;
    printf("\nPercentage of the student: %.2f",perc);


    if(perc<40){
        printf("\nFail");
    }
    else if(perc>=40 && perc<50){
        printf("\nAverage");
    }
    else if(perc>=50 && perc<60){
        printf("\nthird class");
    }
    else if(perc>=60 && perc<70){
        printf("\nsecond class");
    }
    else if(perc>=70 && perc<85){
        printf("\nFirst class");
    }
    else if(perc>=85 && perc<100){
        printf("\nDistinction");
    }
}
