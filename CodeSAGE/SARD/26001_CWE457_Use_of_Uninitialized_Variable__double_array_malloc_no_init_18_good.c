#ifndef VAR1
static void FUN1()
{
 double * VAR2;
 VAR2 = (double *)malloc(10*sizeof(double));
 goto VAR3;
VAR3:
 ;
 goto VAR4;
VAR4:
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR2[VAR5] = (double)VAR5;
 }
 }
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN2(VAR2[VAR5]);
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
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR2[VAR5] = (double)VAR5;
 }
 }
 goto VAR4;
VAR4:
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN2(VAR2[VAR5]);
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
