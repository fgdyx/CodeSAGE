#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 /* FLAW: Do not initialize data */
 ;
}
void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 /* POTENTIAL FLAW: If data is not initialized properly, wcscat() may not function correctly */
 wcscat(VAR2, VAR4);
 FUN3(VAR2);
 }
}
#endif
