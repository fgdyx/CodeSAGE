#ifndef VAR1
void FUN1(double * &VAR2);
static void FUN2()
{
 double * VAR2;
 VAR2 = new double[10];
 FUN1(VAR2);
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN3(VAR2[VAR3]);
 }
 }
 delete [] VAR2;
}
void FUN4(double * &VAR2);
static void FUN5()
{
 double * VAR2;
 VAR2 = new double[10];
 FUN4(VAR2);
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = (double)VAR3;
 }
 }
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN3(VAR2[VAR3]);
 }
 }
 delete [] VAR2;
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
