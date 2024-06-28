#ifndef VAR1
void FUN1(double * * VAR2);
static void FUN2()
{
 double * VAR2;
 VAR2 = new double[10];
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = (double)VAR3;
 }
 }
 FUN1(&VAR2);
}
void FUN3(double * * VAR2);
static void FUN4()
{
 double * VAR2;
 VAR2 = new double[10];
 {
 int VAR3;
 for(VAR3=0; VAR3<(10/2); VAR3++)
 {
 VAR2[VAR3] = (double)VAR3;
 }
 }
 FUN3(&VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
