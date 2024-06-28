#ifndef VAR1
void FUN1(wchar_t * VAR2);
void FUN2()
{
 wchar_t * VAR2;
 void (*VAR3) (wchar_t *) = VAR4;
 VAR2 = NULL;
 /* FLAW: Allocate using new[] and point data to a small buffer that is smaller than the large buffer used in the sinks */
 VAR2 = new wchar_t[50];
 VAR2[0] = VAR5'';
 FUN3(VAR2);
}
#endif
