#ifndef VAR1
void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[100];
 VAR2 = VAR3;
 while(1)
 {
 /* FLAW: Do not initialize data */
 ;
 break;
 }
 {
 wchar_t VAR4[100];
 wmemset(VAR4, VAR5'', 100-1);
 VAR4[100-1] = VAR5'';
 /* POTENTIAL FLAW: If data is not initialized properly, wcscat() may not function correctly */
 wcscat(VAR2, VAR4);
 FUN2(VAR2);
 }
}
#endif
