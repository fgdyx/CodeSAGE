#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 int * VAR3;
 structType VAR2;
 VAR3 = NULL;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR3 = (int *)realloc(VAR3, 100*sizeof(int));
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
