#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 int * VAR3;
 structType VAR2;
 VAR3 = NULL;
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = new int[50];
 VAR2.VAR4 = VAR3;
 FUN1(VAR2);
}
#endif
