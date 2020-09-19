#include <function_def.h>

int main()
{
    printf("\n\n\t\tBasic C Program demonstrartion\n\n\n");
    int choice;

    while(1)
    {
        printf("1. Area of circle \n2. Area of triangle\n3. Area of square\n4. Celcius To Kelvin\n5. Kelvin to Celcius\n6.palindrome\n7.Exit\n\n\n");
        printf("Enter your choice :  ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1:
                  printf("Enter the radius of circle:  ");
                  int radius;
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
            case 3:
                  printf("Enter the side length of square:  ");
                  int side_length;
                  scanf("%d",&side_length);
                  printf("Area of Square = %d\n\n",area_of_square(side_length));
                  break;
            case 4:
                  printf("Enter the temperature in Celcius:  ");
                  int temperature;
                  scanf("%d",&temperature);
                  printf("%d celcius = %d kelvin\n\n",temperature,CelciusToKelvin(temperature));
                  break;
             case 5:
                  printf("Enter the temperature in Kelvin:  ");
                  int temperature;
                  scanf("%d",&temperature);
                  printf("%d Kelvin = %d Celcius\n\n",temperature,KelvinTOCelcius(temperature));
                  break;
              case 6:
                  printf("Enter the number to be checked for palindrome:  ");
                  int check_number;
                  scanf("%d",&check_number);
                  if (check_number == palindrome(check_number))
                    printf("%d is a palindrome.", check_number);
                  else
                    printf("%d is not a palindrome.", check_number);
                  break;
        
            case 7:
                printf("\n\n\t\t\tCoding is Fun !\n\n\n");
                exit(0);    // terminates the complete program execution
        }
    }
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
