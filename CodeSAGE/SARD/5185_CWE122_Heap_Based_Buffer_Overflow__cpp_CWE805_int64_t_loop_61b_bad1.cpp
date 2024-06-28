#ifndef VAR1
VAR2 * FUN1(VAR2 * VAR3)
{
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = new VAR2[50];
 return VAR3;
}
#endif
