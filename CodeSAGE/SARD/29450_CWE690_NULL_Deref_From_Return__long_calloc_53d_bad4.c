#ifndef VAR1
void FUN1(long * VAR2)
{
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR2[0] = 5L;
 FUN2(VAR2[0]);
 free(VAR2);
}
#endif
