#ifndef VAR1
int * FUN1(int * VAR2)
{
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = (int *)malloc(50*sizeof(int));
 return VAR2;
}
#endif
