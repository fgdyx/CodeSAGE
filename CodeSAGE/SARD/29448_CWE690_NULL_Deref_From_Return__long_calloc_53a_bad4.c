#ifndef VAR1
void FUN1(long * VAR2);
void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (long *)calloc(1, sizeof(long));
 FUN1(VAR2);
}
#endif
