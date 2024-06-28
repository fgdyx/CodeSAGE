#ifndef VAR1
void FUN1()
{
 int VAR2;
 long * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR3 = (long *)calloc(1, sizeof(long));
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 /* FLAW: Initialize memory buffer without checking to see if the memory allocation function failed */
 VAR3[0] = 5L;
 FUN2(VAR3[0]);
 free(VAR3);
 }
}
#endif
