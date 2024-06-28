#ifndef VAR1
void FUN1(wchar_t * &VAR2);
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 size_t VAR4;
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 VAR4 = wcslen(VAR5);
 /* POTENTIAL FLAW: If data is not initialized properly, wcsncat() may not function correctly */
 wcsncat(VAR2, VAR5, VAR4);
 FUN3(VAR2);
 }
}
#endif
