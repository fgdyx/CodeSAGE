#ifndef VAR1
void FUN1(structType VAR2);
void FUN2()
{
 wchar_t * VAR3;
 structType VAR2;
 VAR3 = new wchar_t[100];
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR3, VAR4'', 100-1);
 VAR3[100-1] = VAR4'';
 VAR2.VAR5 = VAR3;
 FUN1(VAR2);
}
#endif
