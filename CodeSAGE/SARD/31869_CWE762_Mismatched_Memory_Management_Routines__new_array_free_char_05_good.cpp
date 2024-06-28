#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = new char[100];
 }
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 delete [] VAR2;
 }
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = new char[100];
 }
 if(VAR3)
 {
 delete [] VAR2;
 }
}
static void FUN4()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 VAR2 = (char *)malloc(100*sizeof(char));
 }
 if(VAR3)
 {
 free(VAR2);
 }
}
static void FUN5()
{
 char * VAR2;
 VAR2 = NULL;
 if(VAR3)
 {
 VAR2 = (char *)malloc(100*sizeof(char));
 }
 if(VAR3)
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
