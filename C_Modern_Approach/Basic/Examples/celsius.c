/* Converts a Fahrenheit temperature to Celsius */
#include <stdio.h>

#define FREEZING_PT (32.0f)    // macro definition
#define SCALE_FACTOR (5.0f / 9.0f)    // macro definition

int main(void)
{
  float fahrenheit;
  float celsius;

  printf("Enter Fahrenheit temperature: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
  printf("Celsius equivalent: %.1f\n", celsius);

  return 0;
}