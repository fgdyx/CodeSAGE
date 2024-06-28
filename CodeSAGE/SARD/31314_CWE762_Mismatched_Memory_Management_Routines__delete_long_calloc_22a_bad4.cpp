#ifndef VAR1
int VAR2 = 0;
void FUN1(long * VAR3);
void FUN2()
{
 long * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires free() to free the memory */
 VAR3 = (long *)calloc(100, sizeof(long));
 VAR2 = 1;
 FUN1(VAR3);
}
#endif
