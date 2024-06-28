#ifndef VAR1
extern int VAR2;
void FUN1(VAR3 * VAR4)
{
 if(VAR2)
 {
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR4[0] = 5LL;
 FUN2(VAR4[0]);
 free(VAR4);
 }
}
#endif
