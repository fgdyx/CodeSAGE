#ifndef VAR1
extern int VAR2;
VAR3 * FUN1(VAR3 * VAR4)
{
 if(VAR2)
 {
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR4 = new VAR3[50];
 }
 return VAR4;
}
#endif
