#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[256] = "";
 VAR2 = VAR3;
 if(FUN2())
 {
 FUN3("");
 }
 else
 {
 strcat(VAR2, "");
 }
 {
 VAR4* VAR5 = NULL;
 ULONG VAR6 = 0L;
 ULONG VAR7 = 0L;
 VAR8 *VAR9 = NULL;
 char VAR10[256];
 _snprintf(VAR10, 256-1, "", VAR2);
 VAR5 = FUN4("", VAR11);
 if (VAR5 == NULL)
 {
 FUN3("");
 FUN5(1);
 }
 VAR6 = FUN6(VAR5, NULL);
 if (VAR6 != VAR12)
 {
 FUN3("");
 FUN5(1);
 }
 VAR7 = FUN7(
 VAR5,
 "",
 VAR13,
 VAR10,
 NULL,
 0,
 NULL,
 NULL,
 VAR14,
 VAR14,
 &VAR9);
 if (VAR7 != VAR12)
 {
 FUN3("");
 if (VAR9 != NULL)
 {
 FUN8(VAR9);
 }
 FUN5(1);
 }
 if (VAR9 != NULL)
 {
 FUN8(VAR9);
 }
 FUN9(VAR5);
 }
}
static void FUN10()
{
 char * VAR2;
 char VAR3[256] = "";
 VAR2 = VAR3;
 if(FUN11())
 {
 strcat(VAR2, "");
 }
 {
 VAR4* VAR5 = NULL;
 ULONG VAR6 = 0L;
 ULONG VAR7 = 0L;
 VAR8 *VAR9 = NULL;
 char VAR10[256];
 _snprintf(VAR10, 256-1, "", VAR2);
 VAR5 = FUN4("", VAR11);
 if (VAR5 == NULL)
 {
 FUN3("");
 FUN5(1);
 }
 VAR6 = FUN6(VAR5, NULL);
 if (VAR6 != VAR12)
 {
 FUN3("");
 FUN5(1);
 }
 VAR7 = FUN7(
 VAR5,
 "",
 VAR13,
 VAR10,
 NULL,
 0,
 NULL,
 NULL,
 VAR14,
 VAR14,
 &VAR9);
 if (VAR7 != VAR12)
 {
 FUN3("");
 if (VAR9 != NULL)
 {
 FUN8(VAR9);
 }
 FUN5(1);
 }
 if (VAR9 != NULL)
 {
 FUN8(VAR9);
 }
 FUN9(VAR5);
 }
}
void FUN12()
{
 FUN1();
 FUN10();
}
#endif
