#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3[2];
 {
 VAR5* VAR6 = NULL;
 ULONG VAR7 = 0L;
 ULONG VAR8 = 0L;
 VAR9 *VAR10 = NULL;
 char VAR11[256];
 _snprintf(VAR11, 256-1, "", VAR4);
 VAR6 = FUN2("", VAR12);
 if (VAR6 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 VAR7 = FUN5(VAR6, NULL);
 if (VAR7 != VAR13)
 {
 FUN3("");
 FUN4(1);
 }
 VAR8 = FUN6(
 VAR6,
 "",
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
 FUN3("");
 if (VAR10 != NULL)
 {
 FUN7(VAR10);
 }
 FUN4(1);
 }
 if (VAR10 != NULL)
 {
 FUN7(VAR10);
 }
 FUN8(VAR6);
 }
}
#endif
