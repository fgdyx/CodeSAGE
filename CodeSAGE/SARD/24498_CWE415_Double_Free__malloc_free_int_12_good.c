#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 free(VAR2);
 }
 else
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 free(VAR2);
 }
 if(FUN2())
 {
 ;
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
 if(FUN2())
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 }
 else
 {
 VAR2 = (int *)malloc(100*sizeof(int));
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
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
