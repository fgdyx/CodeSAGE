#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t * &VAR3 = VAR2;
 wchar_t VAR4[100];
 VAR2 = VAR4;
 /* FLAW: Do not initialize data */
 ;
 {
 wchar_t * VAR2 = VAR3;
 {
 size_t VAR5;
 wchar_t VAR6[100];
 wmemset(VAR6, VAR7'', 100-1);
 VAR6[100-1] = VAR7'';
 VAR5 = wcslen(VAR6);
 /* POTENTIAL FLAW: If data is not initialized properly, wcsncat() may not function correctly */
 wcsncat(VAR2, VAR6, VAR5);
 FUN2(VAR2);
 }
 }
}
#endif
