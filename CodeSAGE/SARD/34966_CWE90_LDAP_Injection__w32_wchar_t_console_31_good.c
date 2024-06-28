#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t VAR3[256] = VAR4"";
 VAR2 = VAR3;
 wcscat(VAR2, VAR4"");
 {
 wchar_t * VAR5 = VAR2;
 wchar_t * VAR2 = VAR5;
 {
 VAR6* VAR7 = NULL;
 ULONG VAR8 = 0L;
 ULONG VAR9 = 0L;
 VAR10 *VAR11 = NULL;
 wchar_t VAR12[256];
 _snwprintf(VAR12, 256-1, VAR4"", VAR2);
 VAR7 = FUN2(VAR4"", VAR13);
 if (VAR7 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 VAR8 = FUN5(VAR7, NULL);
 if (VAR8 != VAR14)
 {
 FUN3("");
 FUN4(1);
 }
 VAR9 = ldap_search_ext_sW(
 VAR7,
 VAR4"",
 VAR15,
 VAR12,
 NULL,
 0,
 NULL,
 NULL,
 VAR16,
 VAR16,
 &VAR11);
 if (VAR9 != VAR14)
 {
 FUN3("");
 if (VAR11 != NULL)
 {
 FUN6(VAR11);
 }
 FUN4(1);
 }
 if (VAR11 != NULL)
 {
 FUN6(VAR11);
 }
 FUN7(VAR7);
 }
 }
}
void FUN8()
{
 FUN1();
}
#endif
