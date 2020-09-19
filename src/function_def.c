#include <function_def.h>

float area_of_circle(int radius)
{ 
  return ((3.14)*radius*radius);
}

float area_of_triangle(int base, int height)
{ 
  return (0.5*base*height);
}

int area_of_square(int side_length)
{ 
  return (side_length*side_length);
}

int CelciusToKelvin(int temperature)
{
  return (temperature+273);
}

int KelvinToCelcius(int temperature)
{
  return (temperature-273);
}

int palindrome(int check_number)
{
  int reversedInteger = 0, remainder;
  while( check_number!=0 )
    {
        remainder = check_number%10;
        reversedInteger = reversedInteger*10 + remainder;
        check_number /= 10;
    }
  return reversedInteger;
}
