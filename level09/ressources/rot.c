
#include <stdio.h>

unsigned char token[] = {0x66, 0x34, 0x6b, 0x6d, 0x6d, 0x36, 0x70, 0x7c, 0x3d,
                         0x82, 0x7f, 0x70, 0x82, 0x6e, 0x83, 0x82, 0x44, 0x42,
                         0x83, 0x44, 0x75, 0x7b, 0x7f, 0x8c, 0x89, 0x0a};

int main(int argc, char *argv[]) {
  int i = 0;
  while (token[i]) {
    token[i] = token[i] - i;
    i++;
  }
  printf("%s\n", token);
}