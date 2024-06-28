#ifndef VAR1
void FUN1(long * VAR2);
void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
 VAR2 = new long[100];
 FUN1(VAR2);
}
#endif
