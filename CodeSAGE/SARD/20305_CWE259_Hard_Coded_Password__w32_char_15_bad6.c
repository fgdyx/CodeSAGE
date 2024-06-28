#ifndef VAR1
void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 switch(6)
 {
 case 6:
 /* FLAW: Use a hardcoded password */
 strcpy(VAR2, VAR4);
 break;
 default:
 FUN2("");
 break;
 }
 {
 HANDLE VAR5;
 char * VAR6 = "";
 char * VAR7 = "";
 /* POTENTIAL FLAW: Attempt to login user with password from the source (which may be hardcoded) */
 if (FUN3(
 VAR6,
 VAR7,
 VAR2,
 VAR8,
 VAR9,
 &VAR5) != 0)
 {
 FUN2("");
 FUN4(VAR5);
 }
 else
 {
 FUN2("");
 }
 }
}
#endif
