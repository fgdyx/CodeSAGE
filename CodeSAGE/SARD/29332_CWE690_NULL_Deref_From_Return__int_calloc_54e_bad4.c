#ifndef VAR1
void FUN1(int * VAR2)
{
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 free(VAR2);
}
#endif
