#ifndef VAR1
void FUN1(void * VAR2)
{
 char * * VAR3 = (char * *)VAR2;
 char * VAR4 = (*VAR3);
 {
 HANDLE VAR5;
 char * VAR6 = "";
 char * VAR7 = "";
 /* POTENTIAL FLAW: Attempt to login user with password from the source (which may be hardcoded) */
 if (FUN2(
 VAR6,
 VAR7,
 VAR4,
 VAR8,
 VAR9,
 &VAR5) != 0)
 {
 FUN3("");
 FUN4(VAR5);
 }
 else
 {
 FUN3("");
 }
 }
}
#endif
