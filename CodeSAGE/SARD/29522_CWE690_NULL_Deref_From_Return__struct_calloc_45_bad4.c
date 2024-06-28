#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3 = VAR4;
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR3[0].VAR5 = 1;
 VAR3[0].VAR6 = 1;
 FUN2(&VAR3[0]);
 free(VAR3);
}
void FUN3()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR3 = (VAR2 *)calloc(1, sizeof(VAR2));
 VAR4 = VAR3;
 FUN1();
}
#endif
