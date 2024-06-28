#ifndef VAR1
void FUN1();
void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR2 = (int *)calloc(100, sizeof(int));
 VAR3 = VAR2;
 FUN1();
}
#endif
