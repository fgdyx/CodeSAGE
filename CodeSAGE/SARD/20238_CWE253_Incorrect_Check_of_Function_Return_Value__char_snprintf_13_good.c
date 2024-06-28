#ifndef VAR1
static void FUN1()
{
 if(VAR2!=5)
 {
 FUN2("");
 }
 else
 {
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 if (FUN3(VAR4,100-strlen(VAR5)-1, "", VAR5) < 0)
 {
 FUN2("");
 }
 }
 }
}
static void FUN4()
{
 if(VAR2==5)
 {
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 if (FUN3(VAR4,100-strlen(VAR5)-1, "", VAR5) < 0)
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
