#ifndef VAR1
void FUN1(wchar_t * VAR2)
{
 {
 size_t VAR3;
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 VAR3 = wcslen(VAR4);
 /* POTENTIAL FLAW: If data is not initialized properly, wcsncat() may not function correctly */
 wcsncat(VAR2, VAR4, VAR3);
 FUN2(VAR2);
 }
}
#endif
