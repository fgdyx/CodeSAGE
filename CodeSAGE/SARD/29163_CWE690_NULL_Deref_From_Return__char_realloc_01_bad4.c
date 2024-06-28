#ifndef VAR1
void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (char *)realloc(VAR2, 20*sizeof(char));
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 strcpy(VAR2, "");
 FUN2(VAR2);
 free(VAR2);
}
#endif
