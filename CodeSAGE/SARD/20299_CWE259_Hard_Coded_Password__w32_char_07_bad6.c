#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR4==5)
 {
 /* FLAW: Use a hardcoded password */
 strcpy(VAR2, VAR5);
 }
 {
 HANDLE VAR6;
 char * VAR7 = "";
 char * VAR8 = "";
 /* POTENTIAL FLAW: Attempt to login user with password from the source (which may be hardcoded) */
 if (FUN2(
 VAR7,
 VAR8,
 VAR2,
 VAR9,
 VAR10,
 &VAR6) != 0)
 {
 FUN3("");
 FUN4(VAR6);
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
