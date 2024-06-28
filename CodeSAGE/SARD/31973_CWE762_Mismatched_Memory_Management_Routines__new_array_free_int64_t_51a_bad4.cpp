#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
 VAR3 = new VAR2[100];
 FUN1(VAR3);
}
#endif
