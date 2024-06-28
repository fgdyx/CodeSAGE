#ifndef VAR1
void FUN1(int * VAR2);
void FUN2()
{
 int * VAR2;
 void (*VAR3) (int *) = VAR4;
 VAR2 = NULL;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = (int *)malloc(50*sizeof(int));
 FUN3(VAR2);
}
#endif
