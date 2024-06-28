#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new char[100];
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 delete [] VAR2;
 }
}
static void FUN5()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new char[100];
 }
 if(FUN2())
 {
 delete [] VAR2;
 }
}
static void FUN6()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = (char *)malloc(100*sizeof(char));
 }
 if(FUN2())
 {
 free(VAR2);
 }
}
static void FUN7()
{
 char * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = (char *)malloc(100*sizeof(char));
 }
 if(FUN2())
 {
 free(VAR2);
 }
}
void FUN8()
{
 FUN1();
 FUN5();
 FUN6();
 FUN7();
}
#endif
