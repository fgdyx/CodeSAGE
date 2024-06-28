#ifndef VAR1
void FUN1()
{
 char * VAR2 = VAR3;
 {
 VAR4* VAR5 = NULL;
 ULONG VAR6 = 0L;
 ULONG VAR7 = 0L;
 VAR8 *VAR9 = NULL;
 char VAR10[256];
 _snprintf(VAR10, 256-1, "", VAR2);
 VAR5 = FUN2("", VAR11);
 if (VAR5 == NULL)
 {
 FUN3("");
 FUN4(1);
 }
 VAR6 = FUN5(VAR5, NULL);
 if (VAR6 != VAR12)
 {
 FUN3("");
 FUN4(1);
 }
 VAR7 = FUN6(
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
 FUN7(VAR9);
 }
 FUN4(1);
 }
 if (VAR9 != NULL)
 {
 FUN7(VAR9);
 }
 FUN8(VAR5);
 }
}
#endif
