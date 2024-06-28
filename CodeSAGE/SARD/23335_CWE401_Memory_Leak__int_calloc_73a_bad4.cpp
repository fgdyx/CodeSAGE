#ifndef VAR1
void FUN1(VAR2<int *> VAR3);
void FUN2()
{
 int * VAR4;
 VAR2<int *> VAR3;
 VAR4 = NULL;
 /* POTENTIAL FLAW: Allocate memory on the heap */
 VAR4 = (int *)calloc(100, sizeof(int));
 VAR4[0] = 5;
 FUN3(VAR4[0]);
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 VAR3.FUN4(VAR4);
 FUN1(VAR3);
}
#endif
