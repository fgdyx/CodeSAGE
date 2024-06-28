#ifndef VAR1
static void FUN1(char * VAR2)
{
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 strcpy(VAR2, "");
 FUN2(VAR2);
 free(VAR2);
}
void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (char *)realloc(VAR2, 20*sizeof(char));
 FUN1(VAR2);
}
#endif
