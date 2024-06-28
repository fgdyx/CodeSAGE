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
 wchar_t VAR5[100];
 wmemset(VAR5, VAR6'', 100-1);
 VAR5[100-1] = VAR6'';
 /* POTENTIAL FLAW: If data is not initialized properly, wcscat() may not function correctly */
 wcscat(VAR2, VAR5);
 FUN2(VAR2);
 }
 }
}
#endif
