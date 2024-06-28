#ifndef VAR1
VAR2 * FUN1(VAR2 * VAR3)
{
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR3 = (VAR2 *)calloc(100, sizeof(VAR2));
 return VAR3;
}
#endif
