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
 VAR2 = (int *)malloc(10*sizeof(int));
 FUN1(VAR2);
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN3(VAR2[VAR3]);
 }
 }
}
static void FUN4(int * &VAR2)
{
 {
 int VAR3;
 for(VAR3=0; VAR3<(10/2); VAR3++)
 {
 VAR2[VAR3] = VAR3;
 }
 }
}
static void FUN5()
{
 int * VAR2;
 VAR2 = (int *)malloc(10*sizeof(int));
 FUN4(VAR2);
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
 FUN3(VAR2[VAR3]);
 }
 }
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
