#ifndef VAR1
void FUN1()
{
 if(5==5)
 {
 {
 char * VAR2 = "";
 HKEY VAR3;
 /* FLAW: Call RegCreateKeyExA() with HKEY_LOCAL_MACHINE violating the least privilege principal */
 if (FUN2(
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
 FUN3("");
 }
 else
 {
 FUN3("");
 FUN4(VAR3);
 }
 }
 }
}
#endif
