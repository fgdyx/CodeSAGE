#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = (int *)calloc(100, sizeof(int));
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 }
 if(FUN4())
 {
 FUN5("");
 }
 else
 {
 free(VAR2);
 }
}
static void FUN6()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = (int *)calloc(100, sizeof(int));
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 }
 if(FUN2())
 {
 free(VAR2);
 }
}
static void FUN7()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN4())
 {
 FUN5("");
 }
 else
 {
 VAR2 = (int *)FUN8(100*sizeof(int));
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 }
 if(FUN2())
 {
 ;
 }
}
static void FUN9()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = (int *)FUN8(100*sizeof(int));
 VAR2[0] = 5;
 FUN3(VAR2[0]);
 }
 if(FUN2())
 {
 ;
 }
}
void FUN10()
{
 FUN1();
 FUN6();
 FUN7();
 FUN9();
}
#endif
