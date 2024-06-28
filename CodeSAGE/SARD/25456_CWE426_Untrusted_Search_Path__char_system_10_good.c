#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 strcpy(VAR2, VAR5);
 }
 if (FUN3(VAR2) <= 0)
 {
 FUN2("");
 FUN4(1);
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR3[100] = "";
 VAR2 = VAR3;
 if(VAR6)
 {
 strcpy(VAR2, VAR5);
 }
 if (FUN3(VAR2) <= 0)
 {
 FUN2("");
 FUN4(1);
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
