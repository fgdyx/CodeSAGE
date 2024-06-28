#ifndef VAR1
void FUN1(long * &VAR2)
{
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (long *)malloc(1*sizeof(long));
}
#endif
