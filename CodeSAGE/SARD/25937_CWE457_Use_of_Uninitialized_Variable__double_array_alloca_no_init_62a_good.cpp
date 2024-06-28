#ifndef VAR1
void FUN1(double * &VAR2);
static void FUN2()
{
 double * VAR2;
 VAR2 = (double *)FUN3(10*sizeof(double));
 FUN1(VAR2);
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN4(VAR2[VAR3]);
 }
 }
}
void FUN5(double * &VAR2);
static void FUN6()
{
 double * VAR2;
 VAR2 = (double *)FUN3(10*sizeof(double));
 FUN5(VAR2);
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
