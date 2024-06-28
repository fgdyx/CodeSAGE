#ifndef VAR1
void FUN1()
{
 long * VAR2;
 long * &VAR3 = VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (long *)malloc(1*sizeof(long));
 {
 long * VAR2 = VAR3;
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR2[0] = 5L;
 FUN2(VAR2[0]);
 free(VAR2);
 }
}
#endif
