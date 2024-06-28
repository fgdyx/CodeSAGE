#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 double * VAR3;
 VAR3 = (double *)FUN3(10*sizeof(double));
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR3[VAR4] = (double)VAR4;
 }
 }
 FUN1(&VAR3);
}
void FUN4(void * VAR2);
static void FUN5()
{
 double * VAR3;
 VAR3 = (double *)FUN3(10*sizeof(double));
 {
 int VAR4;
 for(VAR4=0; VAR4<(10/2); VAR4++)
 {
 VAR3[VAR4] = (double)VAR4;
 }
 }
 FUN4(&VAR3);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
