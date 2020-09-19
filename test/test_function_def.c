#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <function_def.h>
#define PROJECT_NAME    "Basic_c_codes"

/* Prototypes for all the test functions */
void test_area_of_circle(void);
void test_area_of_triangle(void);
void test_area_of_square(void);
void test_CelciusToKelvin(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "area_of_circle", test_area_of_circle);
  CU_add_test(suite, "area_of_triangle", test_area_of_triangle);
  CU_add_test(suite, "area_of_square", test_area_of_square);
  CU_add_test(suite, "CelciusToKelvin", test_CelciusToKelvin);


/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 
void test_area_of_circle(void) {
  CU_ASSERT(3.14 == area_of_circle(10));
  
  /* Dummy fail*/
}

void test_area_of_triangle(void) {
  CU_ASSERT(25.00 == area_of_triangle(5, 10));
  
}

void test_area_of_square(void) {
  CU_ASSERT(25 == area_of_square(5));
  
}

void test_CelciusToKelvin(void) {
  CU_ASSERT(274 == CelciusToKelvin(1));
  
}
