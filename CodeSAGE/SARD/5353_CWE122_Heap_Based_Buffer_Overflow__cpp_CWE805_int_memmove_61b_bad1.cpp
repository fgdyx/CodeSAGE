#ifndef VAR1
int * FUN1(int * VAR2)
{
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = new int[50];
 return VAR2;
}
#endif
