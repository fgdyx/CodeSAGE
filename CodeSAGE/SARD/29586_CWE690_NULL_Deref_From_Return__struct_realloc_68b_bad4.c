#ifndef VAR1
void FUN1()
{
 VAR2 * VAR3 = VAR4;
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR3[0].VAR5 = 1;
 VAR3[0].VAR6 = 1;
 FUN2(&VAR3[0]);
 free(VAR3);
}
#endif
