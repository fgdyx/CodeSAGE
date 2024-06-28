#ifndef VAR1
void FUN1(int * VAR2[]);
void FUN2()
{
 int * VAR3;
 int * VAR2[5];
 VAR3 = NULL;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = (int *)malloc(50*sizeof(int));
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
#endif
