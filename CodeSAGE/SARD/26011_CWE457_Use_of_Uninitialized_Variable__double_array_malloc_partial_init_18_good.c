#ifndef VAR1
static void FUN1()
{
 double * VAR2;
 VAR2 = (double *)malloc(10*sizeof(double));
 goto VAR3;
VAR3:
 {
 int VAR4;
 for(VAR4=0; VAR4<(10/2); VAR4++)
 {
 VAR2[VAR4] = (double)VAR4;
 }
 }
 goto VAR5;
VAR5:
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
 FUN2(VAR2[VAR4]);
 }
 }
}
static void FUN3()
{
 double * VAR2;
 VAR2 = (double *)malloc(10*sizeof(double));
 goto VAR3;
VAR3:
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR2[VAR4] = (double)VAR4;
 }
 }
 goto VAR5;
VAR5:
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN2(VAR2[VAR4]);
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
