#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = 5;
 }
 }
 free(VAR2);
 }
 if(VAR3!=5)
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
 if(VAR3==5)
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = 5;
 }
 }
 free(VAR2);
 }
 if(VAR3==5)
 {
 ;
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
 VAR2 = (int *)malloc(100*sizeof(int));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = 5;
 }
 }
 }
 if(VAR3==5)
 {
 FUN5(VAR2[0]);
 }
}
static void FUN6()
{
 int * VAR2;
 VAR2 = NULL;
 if(VAR3==5)
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 {
 size_t VAR4;
 for(VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = 5;
 }
 }
 }
 if(VAR3==5)
 {
 FUN5(VAR2[0]);
 }
}
void FUN7()
{
 FUN1();
 FUN3();
 FUN4();
 FUN6();
}
#endif
