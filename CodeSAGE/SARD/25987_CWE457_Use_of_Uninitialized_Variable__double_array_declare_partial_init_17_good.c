#ifndef VAR1
static void FUN1()
{
 int VAR2,VAR3;
 double * VAR4;
 double VAR5[10];
 VAR4 = VAR5;
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
 FUN2(VAR4[VAR2]);
 }
 }
 }
}
static void FUN3()
{
 int VAR6,VAR7;
 double * VAR4;
 double VAR5[10];
 VAR4 = VAR5;
 for(VAR6 = 0; VAR6 < 1; VAR6++)
 {
 {
 int VAR2;
 for(VAR2=0; VAR2<10; VAR2++)
 {
 VAR4[VAR2] = (double)VAR2;
 }
 }
 }
 for(VAR7 = 0; VAR7 < 1; VAR7++)
 {
 {
 int VAR2;
 for(VAR2=0; VAR2<10; VAR2++)
 {
 FUN2(VAR4[VAR2]);
 }
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
