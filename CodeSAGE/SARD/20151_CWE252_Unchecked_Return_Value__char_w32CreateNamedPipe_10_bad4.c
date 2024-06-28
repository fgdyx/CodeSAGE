#ifndef VAR1
void FUN1()
{
 if(VAR2)
 {
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
 /* FLAW: Do not check the return value */
 VAR6 = FUN3(VAR4, NULL) ? VAR15 : (FUN4() == VAR16);
 FUN5(VAR4);
 }
 }
}
#endif
