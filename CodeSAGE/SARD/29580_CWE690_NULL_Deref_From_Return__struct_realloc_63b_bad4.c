#ifndef VAR1
void FUN1(VAR2 * * VAR3)
{
 VAR2 * VAR4 = *VAR3;
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR4[0].VAR5 = 1;
 VAR4[0].VAR6 = 1;
 FUN2(&VAR4[0]);
 free(VAR4);
}
#endif
