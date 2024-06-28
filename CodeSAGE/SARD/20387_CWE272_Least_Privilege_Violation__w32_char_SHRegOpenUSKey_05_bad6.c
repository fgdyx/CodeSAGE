#ifndef VAR1
void FUN1()
{
 if(VAR2)
 {
 {
 char * VAR3 = "";
 HUSKEY VAR4;
 /* FLAW: Call SHRegOpenUSKeyA() with HKEY_LOCAL_MACHINE (fIgnoreHKCU == TRUE) violating the least privilege principal */
 if (FUN2(
 VAR3,
 VAR5,
 NULL,
 &VAR4,
 VAR6) != VAR7)
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
