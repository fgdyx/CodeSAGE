#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 VAR2 = new wchar_t[100];
 /* FLAW: Initialize data as a large buffer that is larger than the small buffer used in the sink */
 wmemset(VAR2, VAR3'', 100-1);
 VAR2[100-1] = VAR3'';
 const VAR4& VAR5 = FUN2();
 VAR5.FUN3(VAR2);
}
#endif
