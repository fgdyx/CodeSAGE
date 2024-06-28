#ifndef VAR1
static long * FUN1(long * VAR2)
{
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (long *)malloc(1*sizeof(long));
 return VAR2;
}
void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR2[0] = 5L;
 FUN3(VAR2[0]);
 free(VAR2);
}
#endif
