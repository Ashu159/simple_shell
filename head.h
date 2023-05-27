#ifndef S_H
#define S_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <signal.h>

void c_p_h(void);
void s_i_h(int s);
void c_eof_h(char *buffer);
void c_e_h(char **i_c);
void e_c(char **c, char *n, char **e_p, int lps);
int d_c(const char *p);
void r_c(char **pString, char *sh, char **env, int lps);
void p_e(char **env);
char **d_p(char **env);
void c_e(char *s_n, int lps, char **c);
char **s_c(char *b, const char *d);
void f_m(char **c);
void f_m_e(char **c);
int _strcmp(char *s1, char *s2);
unsigned int _strlen(char *s);
char *_strcpy(char *d, char *s);
int _strint(char *s);
char *_strcat(char *d, char *s);
char *_strchr(const char *s, const char c);
int _strspn(const char* s, const char* c);

char *r_i(void);
char **prs(char *i_s);
int e(char **i_a, char *s, char **env, int cc);


#endif

