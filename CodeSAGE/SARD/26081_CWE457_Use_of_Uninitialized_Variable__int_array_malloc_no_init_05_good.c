#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = (int *)malloc(10*sizeof(int));
 if(VAR3)
 {
 ;
 }
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR2[VAR5] = VAR5;
 }
 }
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR2[VAR5]);
 }
 }
 }
}
static void FUN4()
{
 int * VAR2;
 VAR2 = (int *)malloc(10*sizeof(int));
 if(VAR3)
 {
 ;
 }
 if(VAR3)
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR2[VAR5] = VAR5;
 }
 }
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR2[VAR5]);
 }
 }
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = (int *)malloc(10*sizeof(int));
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR2[VAR5] = VAR5;
 }
 }
 }
 if(VAR3)
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR2[VAR5]);
 }
 }
 }
}
static void FUN6()
{
 int * VAR2;
 VAR2 = (int *)malloc(10*sizeof(int));
 if(VAR3)
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR2[VAR5] = VAR5;
 }
 }
 }
 if(VAR3)
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN3(VAR2[VAR5]);
 }
 }
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
