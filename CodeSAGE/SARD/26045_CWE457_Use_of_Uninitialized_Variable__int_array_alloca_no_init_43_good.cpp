#ifndef VAR1
static void FUN1(int * &VAR2)
{
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = VAR3;
 }
 }
}
static void FUN2()
{
 int * VAR2;
 VAR2 = (int *)FUN3(10*sizeof(int));
 FUN1(VAR2);
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN4(VAR2[VAR3]);
 }
 }
}
static void FUN5(int * &VAR2)
{
 ;
}
static void FUN6()
{
 int * VAR2;
 VAR2 = (int *)FUN3(10*sizeof(int));
 FUN5(VAR2);
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
 FUN4(VAR2[VAR3]);
 }
 }
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
