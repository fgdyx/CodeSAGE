#ifndef VAR1
static void FUN1()
{
 goto VAR2;
VAR2:
 {
 char * VAR3 = "";
 HANDLE VAR4 = VAR5;
 BOOL VAR6 = VAR7;
 VAR4 = FUN2(
 VAR3,
 VAR8,
 VAR9 |
 VAR10 |
 VAR11,
 VAR12,
 VAR13,
 VAR13,
 VAR14,
 NULL);
 if (VAR4 == VAR5)
 {
 FUN3(1);
 }
 VAR6 = FUN4(VAR4, NULL) ? VAR15 : (FUN5() == VAR16);
 FUN6(VAR4);
 }
}
void FUN7()
{
 FUN1();
}
#endif
