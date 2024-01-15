//area of rect = l *b;
//perimeter of rectangle = ;
// are of circumference: ;
// area of triangle: ;

#define PI 3.142
#include<stdio.h>
#include<math.h>
int main()
{
    int rectlen, rectbr, circrad, l1,l2,l3;
    int arearect, perirect, peritri;
    float areacirc, circum, areatri;
    printf("==== Enter the values ====");

    printf("\nLength of the reactangle and breadth: ");
    scanf("%d %d", &rectlen, &rectbr);

    arearect = (rectlen * rectbr);
    printf("\nArea of rectangle: %d",arearect);

    perirect = 2 * (rectlen + rectbr);//
    printf("\nPerimeter of rectangle: %d",perirect);

    printf("\nEnter the radius of the circle: ");
    scanf("%d",&circrad);

    areacirc = PI * circrad * circrad;
    printf("\nThe area of circle is: %.2f",areacirc);

    circum = 2 * PI * circrad;
    printf("\nThe circumference of the circle is: ");           //

    printf("\nEnter the three sides of the TRIANGLE: ");
    scanf("%d %d %d",&l1, &l2, &l3);

    areatri = 0.5 * (l1 * l2);    //
    printf("\narea of the traingle is: %.2f");

    peritri = l1 + l2 + l3;
    printf("\n The perimeter of the triangle is: %.2f",peritri);

}
