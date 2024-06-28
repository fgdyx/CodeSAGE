#ifndef VAR1
void FUN1()
{
 if(VAR2==5)
 {
 {
 char * VAR3 = "";
 HKEY VAR4;
 /* FLAW: Call RegOpenKeyExA() with HKEY_LOCAL_MACHINE violating the least privilege principal */
 if (FUN2(
 VAR5,
 VAR3,
 0,
 VAR6,
 &VAR4) != VAR7)
 {
 FUN3("");
 }
 else
 {
 FUN3("");
 FUN4(VAR4);
 }
 }
 }
}
#endif
