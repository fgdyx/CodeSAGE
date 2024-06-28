#ifndef VAR1
void FUN1();
void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete to free the memory */
 VAR2 = new long;
 VAR3 = VAR2;
 FUN1();
}
#endif
