#ifndef VAR1
void FUN1(VAR2<int *> VAR3);
void FUN2()
{
 int * VAR4;
 VAR2<int *> VAR3;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory without checking if the memory allocation function failed */
 VAR4 = (int *)malloc(1*sizeof(int));
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 VAR3.FUN3(VAR4);
 FUN1(VAR3);
}
#endif
