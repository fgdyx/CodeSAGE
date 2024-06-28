#ifndef VAR1
VAR2 * FUN1(VAR2 * VAR3)
{
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR3 = (VAR2 *)realloc(VAR3, 100*sizeof(VAR2));
 return VAR3;
}
#endif
