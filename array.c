#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void array_display(uint8_t const *const pArray, uint32_t len);

int main(void)
{
  char myString[] = "Hello"; // compiler locates some addrs in RAM then stores the base address for this string
  char *myString2 = "Hello"; // compiler locates some addrs in ROM then stores the base address for myString2

  uint8_t someData[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  array_display(someData, sizeof(someData));

  return 0;
}

void array_display(uint8_t const *const pArray, uint32_t len)
{
  for (int i = 0; i < len; i++)
  {
    printf("Array element [%d] = %d\n", i, pArray[i]);
  }
}