// This program is to print sizes of A0, A1, A2, A3, A4, ....A8 paper

#include <stdio.h>

int main()
{
  int h0, w0;
  h0 = 1189;
  w0 = 841;
  printf("A0 = %d mm X %d mm\n", h0, w0);
  printf("A1 = %d mm X %d mm\n", w0, h0/2);
  printf("A2 = %d mm X %d mm\n", h0/2, w0/2);
  printf("A3 = %d mm X %d mm\n", w0/2, h0/4);
  printf("A4 = %d mm X %d mm\n", h0/4, w0/4);
  printf("A5 = %d mm X %d mm\n", w0/4, h0/8);
  printf("A6 = %d mm X %d mm\n", h0/8, w0/8);
  printf("A7 = %d mm X %d mm\n", w0/8, h0/16);
  printf("A8 = %d mm X %d mm\n", h0/16, w0/16);
  return 0;
}