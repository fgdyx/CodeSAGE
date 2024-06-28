#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(0)
 {
 FUN2("");
 }
 else
 {
 strcpy(VAR2, VAR4);
 }
 {
 VAR5 *VAR6;
 VAR6 = FUN3(VAR2, "");
 if (VAR6 != NULL)
 {
 FUN4(VAR6);
 }
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(1)
 {
 strcpy(VAR2, VAR4);
 }
 {
 VAR5 *VAR6;
 VAR6 = FUN3(VAR2, "");
 if (VAR6 != NULL)
 {
 FUN4(VAR6);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
