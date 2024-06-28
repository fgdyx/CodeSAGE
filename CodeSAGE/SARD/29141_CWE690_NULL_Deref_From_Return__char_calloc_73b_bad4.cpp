#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3.FUN2();
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 strcpy(VAR4, "");
 FUN3(VAR4);
 free(VAR4);
}
#endif
