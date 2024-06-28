#ifndef VAR1
static void FUN1(wchar_t * &VAR2)
{
 wcscat(VAR2, VAR3"");
}
static void FUN2()
{
 wchar_t * VAR2;
 wchar_t VAR4[256] = VAR3"";
 VAR2 = VAR4;
 FUN1(VAR2);
 {
 VAR5* VAR6 = NULL;
 ULONG VAR7 = 0L;
 ULONG VAR8 = 0L;
 VAR9 *VAR10 = NULL;
 wchar_t VAR11[256];
 _snwprintf(VAR11, 256-1, VAR3"", VAR2);
 VAR6 = FUN3(VAR3"", VAR12);
 if (VAR6 == NULL)
 {
 FUN4("");
 FUN5(1);
 }
 VAR7 = FUN6(VAR6, NULL);
 if (VAR7 != VAR13)
 {
 FUN4("");
 FUN5(1);
 }
 VAR8 = ldap_search_ext_sW(
 VAR6,
 VAR3"",
 VAR14,
 VAR11,
 NULL,
 0,
 NULL,
 NULL,
 VAR15,
 VAR15,
 &VAR10);
 if (VAR8 != VAR13)
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
void FUN9()
{
 FUN2();
}
#endif
