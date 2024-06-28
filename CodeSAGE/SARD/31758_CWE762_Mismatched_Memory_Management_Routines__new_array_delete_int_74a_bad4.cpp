#ifndef VAR1
void FUN1(VAR2<int, int *> VAR3);
void FUN2()
{
 int * VAR4;
 VAR2<int, int *> VAR3;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory with a function that requires delete [] to free the memory */
 VAR4 = new int[100];
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
