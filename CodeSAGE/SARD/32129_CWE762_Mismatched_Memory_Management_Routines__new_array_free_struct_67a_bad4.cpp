#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 VAR3 * VAR4;
 structType VAR2;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
 VAR4 = new VAR3[100];
 VAR2.VAR5 = VAR4;
 FUN1(VAR2);
}
#endif
