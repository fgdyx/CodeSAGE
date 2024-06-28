#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 char * VAR2 = "";
 HKEY VAR3;
 /* FLAW: Call RegCreateKeyExA() with HKEY_LOCAL_MACHINE violating the least privilege principal */
 if (FUN3(
 VAR4,
 VAR2,
 0,
 NULL,
 VAR5,
 VAR6,
 NULL,
 &VAR3,
 NULL) != VAR7)
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
 else
 {
 {
 char * VAR2 = "";
 HKEY VAR3;
 if (FUN3(
 VAR8,
 VAR2,
 0,
 NULL,
 VAR5,
 VAR6,
 NULL,
 &VAR3,
 NULL) != VAR7)
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
