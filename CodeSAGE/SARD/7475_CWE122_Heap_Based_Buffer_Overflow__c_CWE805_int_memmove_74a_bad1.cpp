#ifndef VAR1
void FUN1(VAR2<int, int *> VAR3);
void FUN2()
{
 int * VAR4;
 VAR2<int, int *> VAR3;
 VAR4 = NULL;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR4 = (int *)malloc(50*sizeof(int));
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
#endif
