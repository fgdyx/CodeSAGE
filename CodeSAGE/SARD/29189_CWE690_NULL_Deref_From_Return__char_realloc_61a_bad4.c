#ifndef VAR1
char * FUN1(char * VAR2);
void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 strcpy(VAR2, "");
 FUN3(VAR2);
 free(VAR2);
}
#endif
