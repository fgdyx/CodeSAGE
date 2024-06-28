#ifndef VAR1
void FUN1()
{
 if(5==5)
 {
 {
 char * VAR2 = "";
 HUSKEY VAR3;
 /* FLAW: Call SHRegOpenUSKeyA() with HKEY_LOCAL_MACHINE (fIgnoreHKCU == TRUE) violating the least privilege principal */
 if (FUN2(
 VAR2,
 VAR4,
 NULL,
 &VAR3,
 VAR5) != VAR6)
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
