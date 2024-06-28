#ifndef VAR1
void FUN1(long * VAR2[]);
void FUN2()
{
 long * VAR3;
 long * VAR2[5];
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete to free the memory */
 VAR3 = new long;
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
