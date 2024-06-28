#ifndef VAR1
int VAR2 = 0;
void FUN1(int * VAR3);
void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR3 = (int *)realloc(VAR3, 100*sizeof(int));
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
