#ifndef VAR1
void FUN1(VAR2 * VAR3[]);
void FUN2()
{
 VAR2 * VAR4;
 VAR2 * VAR3[5];
 VAR4 = NULL;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR4 = (VAR2 *)realloc(VAR4, 100*sizeof(VAR2));
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
