#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = (int *)calloc(100, sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 }
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 free(VAR2);
 }
}
static void FUN4()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = (int *)calloc(100, sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 }
 if(VAR3==5)
 {
 free(VAR2);
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3!=5)
 {
 FUN3("");
 }
 else
 {
 VAR2 = (int *)FUN6(100*sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 }
 if(VAR3==5)
 {
 ;
 }
}
static void FUN7()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = (int *)FUN6(100*sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 }
 if(VAR3==5)
 {
 ;
 }
}
void FUN8()
{
 FUN1();
 FUN4();
 FUN5();
 FUN7();
}
#endif
