#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 {
 char VAR4[] = "";
 VAR2 = strdup(VAR4);
 }
 }
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 free(VAR2);
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 {
 char VAR4[] = "";
 VAR2 = strdup(VAR4);
 }
 }
 if(VAR3)
 {
 free(VAR2);
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = new char;
 }
 if(VAR3)
 {
 delete VAR2;
 }
}
static void FUN5()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = new char;
 }
 if(VAR3)
 {
 delete VAR2;
 }
}
void FUN6()
{
 FUN1();
 FUN3();
 FUN4();
 FUN5();
}
#endif
