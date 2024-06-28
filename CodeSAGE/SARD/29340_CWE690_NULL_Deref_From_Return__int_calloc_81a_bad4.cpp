#ifndef VAR1
void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (int *)calloc(1, sizeof(int));
 const VAR3& VAR4 = FUN2();
 VAR4.FUN3(VAR2);
}
#endif
