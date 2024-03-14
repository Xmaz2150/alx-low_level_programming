#ifndef MAIN_H_
#define MAIN_H_

typedef struct my_struct {
	char *leet_chars;
	char leet;
} leet_t;

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *str);
char *leet(char *str);

#endif /*MAIN_H_ */
