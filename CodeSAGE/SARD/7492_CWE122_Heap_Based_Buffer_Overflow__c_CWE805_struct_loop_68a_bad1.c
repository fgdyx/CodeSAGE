#ifndef VAR1
void FUN1();
void FUN2()
{
 VAR2 * VAR3;
 VAR3 = NULL;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = (VAR2 *)malloc(50*sizeof(VAR2));
 VAR4 = VAR3;
 FUN1();
}
#endif
