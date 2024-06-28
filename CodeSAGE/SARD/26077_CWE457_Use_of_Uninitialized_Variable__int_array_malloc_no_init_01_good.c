#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = (int *)malloc(10*sizeof(int));
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
 FUN2(VAR2[VAR3]);
 }
 }
}
static void FUN3()
{
 int * VAR2;
 VAR2 = (int *)malloc(10*sizeof(int));
 ;
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
 FUN2(VAR2[VAR3]);
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
