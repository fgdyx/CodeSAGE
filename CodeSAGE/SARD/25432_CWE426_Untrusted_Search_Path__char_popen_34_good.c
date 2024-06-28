#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 CWE426_Untrusted_Search_Path__char_popen_34_unionType VAR3;
 char VAR4[100] = "";
 VAR2 = VAR4;
 strcpy(VAR2, VAR5);
 VAR3.VAR6 = VAR2;
 {
 char * VAR2 = VAR3.VAR7;
 {
 VAR8 *VAR9;
 VAR9 = FUN2(VAR2, "");
 if (VAR9 != NULL)
 {
 FUN3(VAR9);
 }
 }
 }
}
void FUN4()
{
 FUN1();
}
#endif
