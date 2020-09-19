/** 
* @file function_def.h
* function definition header
*
*/
#ifndef __FUNCTION_DEF_H__
#define __FUNCTION_DEF_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <math.h>

/**
*  finds area of circle and returns the result
*/
float area_of_circle(int radius);

/**
*  finds the area of triangle and returns the result
*/
float area_of_triangle(int base, int height);

/**
*  finds area of square and returns the result
*/
int area_of_square(int side_length);

/**
*  converts celcius to Kelvin temperarture and returns the result
*/
int CelciusToKelvin(int temperature);

#endif  /* #define __FUNCTION_DEF_H__ */
