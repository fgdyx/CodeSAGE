#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 {
 char VAR3[] = "";
 VAR2 = strdup(VAR3);
 }
 }
 else
 {
 {
 char VAR3[] = "";
 VAR2 = strdup(VAR3);
 }
 }
 if(FUN2())
 {
 free(VAR2);
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
 if(FUN2())
 {
 VAR2 = new char;
 }
 else
 {
 VAR2 = new char;
 }
 if(FUN2())
 {
 delete VAR2;
 }
 else
 {
 delete VAR2;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
