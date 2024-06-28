#ifndef VAR1
void FUN1(VAR2 * * VAR3);
void FUN2()
{
 VAR2 * VAR4;
 VAR4 = NULL;
 /* FLAW: Allocate and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR4 = (VAR2 *)malloc(50*sizeof(VAR2));
 FUN1(&VAR4);
}
#endif
