#ifndef VAR1
void FUN1(char * VAR2)
{
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 strcpy(VAR2, "");
 FUN2(VAR2);
 free(VAR2);
}
#endif
