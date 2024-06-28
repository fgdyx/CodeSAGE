#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = (int *)malloc(10*sizeof(int));
 if(FUN2())
 {
 ;
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = VAR3;
 }
 }
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN5(VAR2[VAR3]);
 }
 }
 }
}
static void FUN6()
{
 int * VAR2;
 VAR2 = (int *)malloc(10*sizeof(int));
 if(FUN2())
 {
 ;
 }
 if(FUN2())
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = VAR3;
 }
 }
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN5(VAR2[VAR3]);
 }
 }
 }
}
static void FUN7()
{
 int * VAR2;
 VAR2 = (int *)malloc(10*sizeof(int));
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = VAR3;
 }
 }
 }
 if(FUN2())
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN5(VAR2[VAR3]);
 }
 }
 }
}
static void FUN8()
{
 int * VAR2;
 VAR2 = (int *)malloc(10*sizeof(int));
 if(FUN2())
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = VAR3;
 }
 }
 }
 if(FUN2())
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN5(VAR2[VAR3]);
 }
 }
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
