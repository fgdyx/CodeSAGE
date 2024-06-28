#ifndef VAR1
static VAR2 * FUN1(VAR2 * VAR3)
{
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR3 = (VAR2 *)malloc(1*sizeof(VAR2));
 return VAR3;
}
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 VAR3 = FUN1(VAR3);
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR3[0].VAR4 = 1;
 VAR3[0].VAR5 = 1;
 FUN3(&VAR3[0]);
 free(VAR3);
}
#endif
