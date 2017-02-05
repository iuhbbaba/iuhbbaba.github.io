#include <stdint.h>
int main () {
  int x = 2%2 ? 123 : 456;
  printf("%d\n", x);  
  printf("%d\n", !2&0);
  printf("%d %d\n", 3&1<<4, 1<<4|1<<6);
  {
    int x = 10;
    printf("%d\n", (3+x++)%5);
  }
  {
    char x[10];
    *(uint16_t*)&x[0] = 12345;
    *(uint16_t*)&x[2] = 434343;
    *(uint16_t*)&x[4] = 616161;
    printf("%d\n", *(uint16_t*)&x[2]);
  }
}
