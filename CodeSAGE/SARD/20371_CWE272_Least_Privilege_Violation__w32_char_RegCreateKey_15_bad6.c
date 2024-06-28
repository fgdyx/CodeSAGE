#ifndef VAR1
void FUN1()
{
 switch(6)
 {
 case 6:
 {
 char * VAR2 = "";
 HKEY VAR3;
 /* FLAW: Call RegCreateKeyA() with HKEY_LOCAL_MACHINE violating the least privilege principal */
 if (FUN2(
 VAR4,
 VAR2,
 &VAR3) != VAR5)
 {
 FUN3("");
 }
 else
 {
 FUN3("");
 FUN4(VAR3);
 }
 }
 break;
 default:
 FUN3("");
 break;
 }
}
#endif
