#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 double * VAR3;
 VAR3 = new double[10];
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR3[VAR4] = (double)VAR4;
 }
 }
 FUN1(&VAR3);
}
void FUN3(void * VAR2);
static void FUN4()
{
 double * VAR3;
 VAR3 = new double[10];
 {
 int VAR4;
 for(VAR4=0; VAR4<(10/2); VAR4++)
 {
 VAR3[VAR4] = (double)VAR4;
 }
 }
 FUN3(&VAR3);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
