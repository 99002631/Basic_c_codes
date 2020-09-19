#include <function_def.h>

int main()
{
    printf("\n\n\t\tBasic C Program demonstrartion\n\n\n");
    int choice;

    while(1)
    {
        printf("1. Area of circle \n2. Area of triangle\n3. Area of square\n4. Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:;
                  int radius;
                  printf("Enter the radius of circle:  ");
                  scanf("%d",&radius);
                  printf("Area of Circle = %.2f\n\n",area_of_circle(radius));
                  break;
            case 2:;
                  int base,height;
                  printf("Enter base length of triangle:  ");
                  scanf("%d",&base);
                  printf("Enter height of triangle:  ");
                  scanf("%d",&height);
                  printf("Area of Triangle = %.2f\n\n",area_of_triangle(base,height));
                  break;
            case 3:;
                  int side_length;
                  printf("Enter the side length of square:  ");
                  scanf("%d",&side_length);
                  printf("Area of Square = %d\n\n",area_of_square(side_length));
                  break;
        
            case 4:
                printf("\n\n\t\t\tCoding is Fun !\n\n\n");
                exit(0);    // terminates the complete program execution
        }
    }
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
