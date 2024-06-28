#ifndef VAR1
void FUN1(char * VAR2)
{
 {
 HANDLE VAR3;
 char * VAR4 = "";
 char * VAR5 = "";
 /* POTENTIAL FLAW: Attempt to login user with password from the source (which may be hardcoded) */
 if (FUN2(
 VAR4,
 VAR5,
 VAR2,
 VAR6,
 VAR7,
 &VAR3) != 0)
 {
 FUN3("");
 FUN4(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
