#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 free(VAR2);
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 }
 if(FUN2())
 {
 free(VAR2);
 }
}
static void FUN6()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = new int;
 }
 if(FUN2())
 {
 delete VAR2;
 }
}
static void FUN7()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new int;
 }
 if(FUN2())
 {
 delete VAR2;
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
