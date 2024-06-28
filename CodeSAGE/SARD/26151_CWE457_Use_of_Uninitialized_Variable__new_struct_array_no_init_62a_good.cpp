#ifndef VAR1
void FUN1(VAR2 * &VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 VAR3 = new VAR2[10];
 FUN1(VAR3);
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR3[VAR4].VAR5);
 FUN3(VAR3[VAR4].VAR6);
 }
 }
 delete [] VAR3;
}
void FUN4(VAR2 * &VAR3);
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = new VAR2[10];
 FUN4(VAR3);
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
 }
 }
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR3[VAR4].VAR5);
 FUN3(VAR3[VAR4].VAR6);
 }
 }
 delete [] VAR3;
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
