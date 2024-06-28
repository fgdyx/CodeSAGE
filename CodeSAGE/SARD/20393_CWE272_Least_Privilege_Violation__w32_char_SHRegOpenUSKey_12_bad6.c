#ifndef VAR1
void FUN1()
{
 if(FUN2())
 {
 {
 char * VAR2 = "";
 HUSKEY VAR3;
 /* FLAW: Call SHRegOpenUSKeyA() with HKEY_LOCAL_MACHINE (fIgnoreHKCU == TRUE) violating the least privilege principal */
 if (FUN3(
 VAR2,
 VAR4,
 NULL,
 &VAR3,
 VAR5) != VAR6)
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
 HUSKEY VAR3;
 if (FUN3(
 VAR2,
 VAR4,
 NULL,
 &VAR3,
 VAR7) != VAR6)
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
