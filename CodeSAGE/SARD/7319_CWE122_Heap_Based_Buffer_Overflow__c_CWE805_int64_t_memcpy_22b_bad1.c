#ifndef VAR1
extern int VAR2;
VAR3 * FUN1(VAR3 * VAR4)
{
 if(VAR2)
 {
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR4 = (VAR3 *)malloc(50*sizeof(VAR3));
 }
 return VAR4;
}
#endif
