#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,disc;
    float f1,f2;
    
    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("Enter the value of b: ");
    scanf("%d",&b);

    printf("Enter the value of c: ");
    scanf("%d",&c);

    disc = (b*b)-(4*a*c);
    
    switch (disc)
    {
    case 0:
    {   
        f1 = f2 = -b/(2*a);
        printf("The roots are equal %.2f and %.2f\n",f1,f2);
        break;
    }
    
    default:
    {
        switch (disc>0)
        {
        case 1:
        {
            f1 = (-b+sqrt(disc))/(4*a*c);
            f2 = (-b-sqrt(disc))/(4*a*c);
            printf("The roots are real and disctinct %.2f and %.2f\n",f1,f2);
            break;
        }
        case 0:
        {
            printf("The root are imaginary");
            float real=-b/(2.0*a);
            disc=-disc;
            float imag=sqrt(disc)/(2.0*a);
            printf("\nRoot1 =%5.2f + %5.2fi",real, imag);
            printf("\nRoot2 =%5.2f - %5.2fi\n",real, imag);
        }
        }
    }

    }
}