#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 double * VAR4;
 VAR4 = (double *)FUN2(10*sizeof(double));
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 {
 int VAR2;
 for(VAR2=0; VAR2<(10/2); VAR2++)
 {
 VAR4[VAR2] = (double)VAR2;
 }
 }
 }
 for(VAR3 = 0; VAR3 < 1; VAR3++)
 {
 {
 int VAR2;
 for(VAR2=0; VAR2<10; VAR2++)
 {
 VAR4[VAR2] = (double)VAR2;
 }
 }
 {
 int VAR2;
 for(VAR2=0; VAR2<10; VAR2++)
 {
 FUN3(VAR4[VAR2]);
 }
 }
 }
}
static void FUN4()
{
 int VAR5,VAR6;
 double * VAR4;
 VAR4 = (double *)FUN2(10*sizeof(double));
 for(VAR5 = 0; VAR5 < 1; VAR5++)
 {
 {
 int VAR2;
 for(VAR2=0; VAR2<10; VAR2++)
 {
 VAR4[VAR2] = (double)VAR2;
 }
 }
 }
 for(VAR6 = 0; VAR6 < 1; VAR6++)
 {
 {
 int VAR2;
 for(VAR2=0; VAR2<10; VAR2++)
 {
 FUN3(VAR4[VAR2]);
 }
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
