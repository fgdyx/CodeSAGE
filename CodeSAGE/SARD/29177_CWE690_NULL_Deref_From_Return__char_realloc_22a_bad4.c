#ifndef VAR1
int VAR2 = 0;
void FUN1(char * VAR3);
void FUN2()
{
 char * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR3 = (char *)realloc(VAR3, 20*sizeof(char));
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
