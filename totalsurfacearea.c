#include <stdio.h>
int main(){
    int opt;
    float sa,volume,lsa,l,w,h,r,t;
    printf("---Program To Find Total Surface Area---\n");
    printf("1. Press 1 For Volume and Surface Area of Cube\n");
    printf("2. Press 2 For Volume and Surface Area of Cuboid\n");
    printf("3. Press 3 For Volume and Surface Area of Cone\n");
    printf("4. Press 4 For Volume and Surface Area of Cylinder\n");
    printf("5. Press 5 For Volume and Surface Area of Sphere\n");
    printf("Enter the option you wan to use = ");
    scanf("%d",&opt);
    switch (opt){
        case 1:
            printf("Please Enter Length of any side of a Cube = ");
            scanf("%f", &l);
            sa = 6 * (l * l);
            volume = l * l * l;
            lsa = 4 * (l * l);
            printf("\n Surface Area of Cube = %.2f", sa);
            printf("\n Volume of cube = %.2f", volume);
            printf("\n Lateral Surface Area of Cube = %.2f", lsa);
            break;
        case 2:
            printf("\nPlease Enter Length, Width and Height of a Cuboid = ");
            scanf("%f %f %f",&l, &w, &h);
            sa = 2 * (l * w + l * h + w * h);
            volume = l * w * h;
            lsa = 2 * h * (l + w);
            printf("\n The Surface Area of a Cuboid = %.2f\n",sa);
            printf("\n The Volume of a Cuboid = %.2f\n",volume);
            printf("\n The Lateral Surface Area of a Cuboid = %.2f\n",lsa);
            break;
        case 3:
            printf("\nPlease Enter Radius and Height of a Cone = ");
            scanf("%f %f", &r, &h);
            l = sqrt(r * r + h * h);
            sa = 3.14 * r * (r + l);
            volume = (1.0/3) * 3.14 * r * r * h;
            lsa = 3.14 * r * l;
            printf("\n Length of a Side (Slant)of a Cone = %.2f", l);    
            printf("\n Surface Area of a Cone = %.2f", sa);
            printf("\n Volume of a Cone = %.2f", volume);
            printf("\n Lateral Surface Area of a Cone = %.2f", lsa);
            break;
        case 4:
            printf("\nPlease Enter the radius and height of a cylinder = ");
            scanf("%f %f", &r, &h);
            sa = 2 * 3.14 * r * (r + h);
            volume = 3.14 * r* r * h;
            l = 2 * 3.14 * r * h;
            t = 3.14 * r * r;
            printf("\n Surface Area of a cylinder = %.2f", sa);
            printf("\n Volume of a Cylinder = %.2f", volume);
            printf("\n Lateral Surface Area of a cylinder = %.2f", l);
            printf("\n Top OR Bottom Surface Area of a cylinder = %.2f", t);
            break;
        case 5:
            printf("\nPlease Enter the radius of a Sphere = ");
            scanf("%f", &r);
            sa =  4 * 3.144 * r * r;
            volume = (4.0 / 3) * 3.14 * r * r * r;
            printf("\n The Surface area of a Sphere = %.2f", sa);
            printf("\n The Volume of a Sphere = %.2f", volume);
        break;
        default:
        printf("You have entered a wrong option");
        break;
    }
    return 0;
}
