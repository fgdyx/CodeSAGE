#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 char * VAR2 = "";
 HKEY VAR3;
 /* FLAW: Call RegOpenKeyExA() with HKEY_LOCAL_MACHINE violating the least privilege principal */
 if (FUN3(
 VAR4,
 VAR2,
 0,
 VAR5,
 &VAR3) != VAR6)
 {
 FUN4("");
 }
 else
 {
 FUN4("");
 FUN5(VAR3);
 }
 }
 }
}
#endif
