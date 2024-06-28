#ifndef VAR1
void FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (char *)calloc(20, sizeof(char));
 FUN1(VAR2);
}
#endif
