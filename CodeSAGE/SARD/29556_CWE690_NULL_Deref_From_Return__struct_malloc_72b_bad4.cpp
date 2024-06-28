#ifndef VAR1
void FUN1(VAR2<VAR3 *> VAR4)
{
 VAR3 * VAR5 = VAR4[2];
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR5[0].VAR6 = 1;
 VAR5[0].VAR7 = 1;
 FUN2(&VAR5[0]);
 free(VAR5);
}
#endif
