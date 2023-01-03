#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
char *memset(char *s, char b, unsigned int n);
char *memcpy(char *dest, char src, unsigned int n);
char *strch(char *s, char *s);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
#endif
