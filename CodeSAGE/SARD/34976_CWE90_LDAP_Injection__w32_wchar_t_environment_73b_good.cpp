#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3.FUN2();
 {
 VAR5* VAR6 = NULL;
 ULONG VAR7 = 0L;
 ULONG VAR8 = 0L;
 VAR9 *VAR10 = NULL;
 wchar_t VAR11[256];
 _snwprintf(VAR11, 256-1, VAR12"", VAR4);
 VAR6 = FUN3(VAR12"", VAR13);
 if (VAR6 == NULL)
 {
 FUN4("");
 FUN5(1);
 }
 VAR7 = FUN6(VAR6, NULL);
 if (VAR7 != VAR14)
 {
 FUN4("");
 FUN5(1);
 }
 VAR8 = ldap_search_ext_sW(
 VAR6,
 VAR12"",
 VAR15,
 VAR11,
 NULL,
 0,
 NULL,
 NULL,
 VAR16,
 VAR16,
 &VAR10);
 if (VAR8 != VAR14)
 {
 FUN4("");
 if (VAR10 != NULL)
 {
 FUN7(VAR10);
 }
 FUN5(1);
 }
 if (VAR10 != NULL)
 {
 FUN7(VAR10);
 }
 FUN8(VAR6);
 }
}
#endif
