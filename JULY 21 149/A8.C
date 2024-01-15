#include<stdio.h>

int main(){
    int x, y;

    printf("\nCOORDINATES: ");
    scanf("%d %d",&x, &y);

    if(x>1 && y>1){
        printf("\nFirst Coordinate\n");
    }
    else if(x<1 && y>1){
        printf("\n Second Coordinate\n");
    }
    else if(x<1 && y<1){
        printf("\n Third Coordinate\n");
    }
    else if(x>1 && y<1){
        printf("\n Fourth Coordinate\n");
    }
}
