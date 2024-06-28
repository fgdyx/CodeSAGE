#ifndef VAR1
void FUN1(VAR2 * * VAR3);
void FUN2()
{
 VAR2 * VAR4;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR4 = (VAR2 *)realloc(VAR4, 1*sizeof(VAR2));
 FUN1(&VAR4);
}
#endif
