#ifndef VAR1
extern int VAR2;
void FUN1(char * VAR3)
{
 if(VAR2)
 {
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 strcpy(VAR3, "");
 FUN2(VAR3);
 free(VAR3);
 }
}
#endif
