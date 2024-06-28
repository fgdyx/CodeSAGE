#ifndef VAR1
static void FUN1()
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 if (sscanf(VAR5, "", VAR4) == VAR6)
 {
 FUN2("");
 }
 }
 }
}
static void FUN3()
{
 if(VAR7)
 {
 {
 char VAR3[100] = "";
 char * VAR4 = VAR3;
 if (sscanf(VAR5, "", VAR4) == VAR6)
 {
 FUN2("");
 }
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
