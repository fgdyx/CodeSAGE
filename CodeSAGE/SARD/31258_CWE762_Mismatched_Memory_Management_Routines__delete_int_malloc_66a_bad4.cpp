#ifndef VAR1
void FUN1(int * VAR2[]);
void FUN2()
{
 int * VAR3;
 int * VAR2[5];
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR3 = (int *)malloc(100*sizeof(int));
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
