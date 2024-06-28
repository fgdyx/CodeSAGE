#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new char;
 }
 if(0)
 {
 FUN2("");
 }
 else
 {
 delete VAR2;
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = new char;
 }
 if(1)
 {
 delete VAR2;
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(0)
 {
 FUN2("");
 }
 else
 {
 VAR2 = (char *)malloc(100*sizeof(char));
 }
 if(1)
 {
 free(VAR2);
 }
}
static void FUN5()
{
 char * VAR2;
 VAR2 = NULL;
 if(1)
 {
 VAR2 = (char *)malloc(100*sizeof(char));
 }
 if(1)
 {
 free(VAR2);
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
