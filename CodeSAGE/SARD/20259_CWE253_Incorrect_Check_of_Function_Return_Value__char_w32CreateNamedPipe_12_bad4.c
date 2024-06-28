#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 char * VAR2 = "";
 HANDLE VAR3 = VAR4;
 BOOL VAR5 = VAR6;
 VAR3 = FUN3(
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
 /* FLAW: If CreateNamedPipeA() failed, the return value will be INVALID_HANDLE_VALUE,
 but we are checking to see if the return value is NULL */
 if (VAR3 == NULL)
 {
 FUN4(1);
 }
 VAR5 = FUN5(VAR3, NULL) ? VAR14 : (FUN6() == VAR15);
 FUN7(VAR3);
 }
 }
 else
 {
 {
 char * VAR2 = "";
 HANDLE VAR3 = VAR4;
 BOOL VAR5 = VAR6;
 VAR3 = FUN3(
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
 if (VAR3 == VAR4)
 {
 FUN4(1);
 }
 VAR5 = FUN5(VAR3, NULL) ? VAR14 : (FUN6() == VAR15);
 FUN7(VAR3);
 }
 }
}
#endif
