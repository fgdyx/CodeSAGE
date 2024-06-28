#ifndef VAR1
static void FUN1()
{
 if(0)
 {
 FUN2("");
 }
 else
 {
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 if (FUN3(VAR3,100-strlen(VAR4)-1, "", VAR4) < 0)
 {
 FUN2("");
 }
 }
 }
}
static void FUN4()
{
 if(1)
 {
 {
 char VAR2[100] = "";
 char * VAR3 = VAR2;
 if (FUN3(VAR3,100-strlen(VAR4)-1, "", VAR4) < 0)
 {
 FUN2("");
 }
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
