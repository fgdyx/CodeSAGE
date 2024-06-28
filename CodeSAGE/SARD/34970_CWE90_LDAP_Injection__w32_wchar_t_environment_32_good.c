#ifndef VAR1
static void FUN1()
{
 wchar_t * VAR2;
 wchar_t * *VAR3 = &VAR2;
 wchar_t * *VAR4 = &VAR2;
 wchar_t VAR5[256] = VAR6"";
 VAR2 = VAR5;
 {
 wchar_t * VAR2 = *VAR3;
 wcscat(VAR2, VAR6"");
 *VAR3 = VAR2;
 }
 {
 wchar_t * VAR2 = *VAR4;
 {
 VAR7* VAR8 = NULL;
 ULONG VAR9 = 0L;
 ULONG VAR10 = 0L;
 VAR11 *VAR12 = NULL;
 wchar_t VAR13[256];
 _snwprintf(VAR13, 256-1, VAR6"", VAR2);
 VAR8 = FUN2(VAR6"", VAR14);
 if (VAR8 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 VAR9 = FUN5(VAR8, NULL);
 if (VAR9 != VAR15)
 {
 FUN3("");
 FUN4(1);
 }
 VAR10 = ldap_search_ext_sW(
 VAR8,
 VAR6"",
 VAR16,
 VAR13,
 NULL,
 0,
 NULL,
 NULL,
 VAR17,
 VAR17,
 &VAR12);
 if (VAR10 != VAR15)
 {
 FUN3("");
 if (VAR12 != NULL)
 {
 FUN6(VAR12);
 }
 FUN4(1);
 }
 if (VAR12 != NULL)
 {
 FUN6(VAR12);
 }
 FUN7(VAR8);
 }
 }
}
void FUN8()
{
 FUN1();
}
#endif
