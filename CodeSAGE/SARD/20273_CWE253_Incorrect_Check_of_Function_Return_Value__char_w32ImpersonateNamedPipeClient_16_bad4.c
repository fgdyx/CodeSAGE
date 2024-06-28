#ifndef VAR1
void FUN1()
{
 while(1)
 {
 {
 char * VAR2 = "";
 HANDLE VAR3 = VAR4;
 VAR3 = FUN2(
 VAR2,
 VAR5,
 VAR6 |
 VAR7 |
 VAR8,
 VAR9,
 VAR10,
 VAR10,
 VAR11,
 NULL);
 if (VAR3 == VAR4)
 {
 FUN3(1);
 }
 /* FLAW: ImpersonateNamedPipeClient() might fail, in which case the return value will be 0 (false), but
 * we are checking to see if the return value is greater than zero (which will be true) */
 if (FUN4(VAR3) > 0)
 {
 FUN3(1);
 }
 FUN5(VAR3);
 }
 break;
 }
}
#endif
