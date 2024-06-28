#ifndef VAR1
void FUN1()
{
 if(5==5)
 {
 {
 char * VAR2 = "";
 HANDLE VAR3 = VAR4;
 BOOL VAR5 = VAR6;
 VAR3 = FUN2(
 VAR2,
 VAR7,
 VAR8 |
 VAR9 |
 VAR10,
 VAR11,
 VAR12,
 VAR12,
 VAR13,
 NULL);
 /* FLAW: Do not check the return value */
 VAR5 = FUN3(VAR3, NULL) ? VAR14 : (FUN4() == VAR15);
 FUN5(VAR3);
 }
 }
}
#endif
