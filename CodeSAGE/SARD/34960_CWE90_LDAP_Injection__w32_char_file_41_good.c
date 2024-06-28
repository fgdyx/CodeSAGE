#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 VAR3* VAR4 = NULL;
 ULONG VAR5 = 0L;
 ULONG VAR6 = 0L;
 VAR7 *VAR8 = NULL;
 char VAR9[256];
 _snprintf(VAR9, 256-1, "", VAR2);
 VAR4 = FUN2("", VAR10);
 if (VAR4 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 VAR5 = FUN5(VAR4, NULL);
 if (VAR5 != VAR11)
 {
 FUN3("");
 FUN4(1);
 }
 VAR6 = FUN6(
 VAR4,
 "",
 VAR12,
 VAR9,
 NULL,
 0,
 NULL,
 NULL,
 VAR13,
 VAR13,
 &VAR8);
 if (VAR6 != VAR11)
 {
 FUN3("");
 if (VAR8 != NULL)
 {
 FUN7(VAR8);
 }
 FUN4(1);
 }
 if (VAR8 != NULL)
 {
 FUN7(VAR8);
 }
 FUN8(VAR4);
 }
}
static void FUN9()
{
 char * VAR2;
 char VAR14[256] = "";
 VAR2 = VAR14;
 strcat(VAR2, "");
 FUN1(VAR2);
}
void FUN10()
{
 FUN9();
}
#endif
