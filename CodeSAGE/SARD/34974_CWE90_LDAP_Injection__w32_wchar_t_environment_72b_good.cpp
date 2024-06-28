#ifndef VAR1
void FUN1(VAR2<wchar_t *> VAR3)
{
 wchar_t * VAR4 = VAR3[2];
 {
 VAR5* VAR6 = NULL;
 ULONG VAR7 = 0L;
 ULONG VAR8 = 0L;
 VAR9 *VAR10 = NULL;
 wchar_t VAR11[256];
 _snwprintf(VAR11, 256-1, VAR12"", VAR4);
 VAR6 = FUN2(VAR12"", VAR13);
 if (VAR6 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 VAR7 = FUN5(VAR6, NULL);
 if (VAR7 != VAR14)
 {
 FUN3("");
 FUN4(1);
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
 FUN3("");
 if (VAR10 != NULL)
 {
 FUN6(VAR10);
 }
 FUN4(1);
 }
 if (VAR10 != NULL)
 {
 FUN6(VAR10);
 }
 FUN7(VAR6);
 }
}
#endif
