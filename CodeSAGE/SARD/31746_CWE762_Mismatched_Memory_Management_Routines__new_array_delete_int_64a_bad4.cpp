#ifndef VAR1
void FUN1(void * VAR2);
void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
 VAR3 = new int[100];
 FUN1(&VAR3);
}
#endif
