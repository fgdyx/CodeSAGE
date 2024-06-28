#ifndef VAR1
void FUN1(int * VAR2);
void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR2 = (int *)malloc(1*sizeof(int));
 FUN1(VAR2);
}
#endif
