#ifndef VAR1
void FUN1()
{
 if(VAR2)
 {
 {
 char * VAR3 = "";
 HANDLE VAR4 = VAR5;
 VAR4 = FUN2(
 VAR3,
 VAR6,
 VAR7 |
 VAR8 |
 VAR9,
 VAR10,
 VAR11,
 VAR11,
 VAR12,
 NULL);
 if (VAR4 == VAR5)
 {
 FUN3(1);
 }
 /* FLAW: ImpersonateNamedPipeClient() might fail, in which case the return value will be 0 (false), but
 * we are checking to see if the return value is greater than zero (which will be true) */
 if (FUN4(VAR4) > 0)
 {
 FUN3(1);
 }
 FUN5(VAR4);
 }
 }
}
#endif
