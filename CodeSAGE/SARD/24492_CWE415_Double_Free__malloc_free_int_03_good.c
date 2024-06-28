#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 free(VAR2);
 }
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 ;
 }
}
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 free(VAR2);
 }
 if(5==5)
 {
 ;
 }
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 if(5!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 }
 if(5==5)
 {
 free(VAR2);
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 }
 if(5==5)
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
