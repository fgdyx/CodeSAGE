#ifndef VAR1
void FUN1(int * VAR2);
void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete to free the memory */
 VAR2 = new int;
 FUN1(VAR2);
}
#endif
