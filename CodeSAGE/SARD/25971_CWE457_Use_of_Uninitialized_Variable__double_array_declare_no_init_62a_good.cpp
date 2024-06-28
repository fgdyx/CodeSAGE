#ifndef VAR1
void FUN1(double * &VAR2);
static void FUN2()
{
 double * VAR2;
 double VAR3[10];
 VAR2 = VAR3;
 FUN1(VAR2);
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR2[VAR4]);
 }
 }
}
void FUN4(double * &VAR2);
static void FUN5()
{
 double * VAR2;
 double VAR3[10];
 VAR2 = VAR3;
 FUN4(VAR2);
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR2[VAR4] = (double)VAR4;
 }
 }
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR2[VAR4]);
 }
 }
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
