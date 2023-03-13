#ifndef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
int _putchar(char c);
char *_strdup(char *str);
char **strtow(char *str);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);

#endif
