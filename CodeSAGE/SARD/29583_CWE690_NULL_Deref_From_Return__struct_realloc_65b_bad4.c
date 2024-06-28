#ifndef VAR1
void FUN1(VAR2 * VAR3)
{
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR3[0].VAR4 = 1;
 VAR3[0].VAR5 = 1;
 FUN2(&VAR3[0]);
 free(VAR3);
}
#endif
