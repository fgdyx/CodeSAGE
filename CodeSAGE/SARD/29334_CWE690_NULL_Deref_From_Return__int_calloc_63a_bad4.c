#ifndef VAR1
void FUN1(int * * VAR2);
void FUN2()
{
 int * VAR3;
 VAR3 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR3 = (int *)calloc(1, sizeof(int));
 FUN1(&VAR3);
}
#endif
