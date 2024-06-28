#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 }
 if(VAR3!=5)
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
 int * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 }
 if(VAR3==5)
 {
 free(VAR2);
 }
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3!=5)
 {
 FUN2("");
 }
 else
 {
 VAR2 = new int;
 }
 if(VAR3==5)
 {
 delete VAR2;
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = new int;
 }
 if(VAR3==5)
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
