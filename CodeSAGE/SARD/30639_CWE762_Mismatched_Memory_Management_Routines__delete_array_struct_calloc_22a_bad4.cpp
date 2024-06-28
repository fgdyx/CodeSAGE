#ifndef VAR1
int VAR2 = 0;
void FUN1(VAR3 * VAR4);
void FUN2()
{
 VAR3 * VAR4;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR4 = (VAR3 *)calloc(100, sizeof(VAR3));
 VAR2 = 1;
 FUN1(VAR4);
}
#endif
