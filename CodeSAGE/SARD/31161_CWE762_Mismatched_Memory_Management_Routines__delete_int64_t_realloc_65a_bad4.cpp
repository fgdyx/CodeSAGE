#ifndef VAR1
void FUN1(VAR2 * VAR3);
void FUN2()
{
 VAR2 * VAR3;
 void (*VAR4) (VAR2 *) = VAR5;
 VAR3 = NULL;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
 FUN3(VAR3);
}
#endif
