#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 wchar_t * VAR3;
 structType VAR2;
 VAR3 = NULL;
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR3 = new wchar_t[50];
 VAR3[0] = VAR4'';
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
#endif
