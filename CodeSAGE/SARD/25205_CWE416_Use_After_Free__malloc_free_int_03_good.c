#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 {
 size_t VAR3;
 for(VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = 5;
 }
 }
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
 {
 size_t VAR3;
 for(VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = 5;
 }
 }
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
 {
 size_t VAR3;
 for(VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = 5;
 }
 }
 }
 if(5==5)
 {
 FUN5(VAR2[0]);
 }
}
static void FUN6()
{
 int * VAR2;
 VAR2 = NULL;
 if(5==5)
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 {
 size_t VAR3;
 for(VAR3 = 0; VAR3 < 100; VAR3++)
 {
 VAR2[VAR3] = 5;
 }
 }
 }
 if(5==5)
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
