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
 /* FLAW: If CreateNamedPipeA() failed, the return value will be INVALID_HANDLE_VALUE,
 but we are checking to see if the return value is NULL */
 if (VAR4 == NULL)
 {
 FUN3(1);
 }
 VAR6 = FUN4(VAR4, NULL) ? VAR15 : (FUN5() == VAR16);
 FUN6(VAR4);
 }
 }
}
#endif
