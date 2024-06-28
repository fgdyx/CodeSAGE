#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
wchar_t * FUN1(wchar_t * VAR4);
static void FUN2()
{
 wchar_t * VAR4;
 wchar_t VAR5[256] = VAR6"";
 VAR4 = VAR5;
 VAR2 = 0;
 VAR4 = FUN1(VAR4);
 {
 VAR7* VAR8 = NULL;
 ULONG VAR9 = 0L;
 ULONG VAR10 = 0L;
 VAR11 *VAR12 = NULL;
 wchar_t VAR13[256];
 _snwprintf(VAR13, 256-1, VAR6"", VAR4);
 VAR8 = FUN3(VAR6"", VAR14);
 if (VAR8 == NULL)
 {
 FUN4("");
 FUN5(1);
 }
 VAR9 = FUN6(VAR8, NULL);
 if (VAR9 != VAR15)
 {
 FUN4("");
 FUN5(1);
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
 FUN4("");
 if (VAR12 != NULL)
 {
 FUN7(VAR12);
 }
 FUN5(1);
 }
 if (VAR12 != NULL)
 {
 FUN7(VAR12);
 }
 FUN8(VAR8);
 }
}
wchar_t * FUN9(wchar_t * VAR4);
static void FUN10()
{
 wchar_t * VAR4;
 wchar_t VAR5[256] = VAR6"";
 VAR4 = VAR5;
 VAR3 = 1;
 VAR4 = FUN9(VAR4);
 {
 VAR7* VAR8 = NULL;
 ULONG VAR9 = 0L;
 ULONG VAR10 = 0L;
 VAR11 *VAR12 = NULL;
 wchar_t VAR13[256];
 _snwprintf(VAR13, 256-1, VAR6"", VAR4);
 VAR8 = FUN3(VAR6"", VAR14);
 if (VAR8 == NULL)
 {
 FUN4("");
 FUN5(1);
 }
 VAR9 = FUN6(VAR8, NULL);
 if (VAR9 != VAR15)
 {
 FUN4("");
 FUN5(1);
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
 FUN4("");
 if (VAR12 != NULL)
 {
 FUN7(VAR12);
 }
 FUN5(1);
 }
 if (VAR12 != NULL)
 {
 FUN7(VAR12);
 }
 FUN8(VAR8);
 }
}
void FUN11()
{
 FUN2();
 FUN10();
}
#endif
