#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = (int *)FUN2(10*sizeof(int));
 goto VAR3;
VAR3:
 {
 int VAR4;
 for(VAR4=0; VAR4<(10/2); VAR4++)
 {
 VAR2[VAR4] = VAR4;
 }
 }
 goto VAR5;
VAR5:
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR2[VAR4] = VAR4;
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
static void FUN4()
{
 int * VAR2;
 VAR2 = (int *)FUN2(10*sizeof(int));
 goto VAR3;
VAR3:
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR2[VAR4] = VAR4;
 }
 }
 goto VAR5;
VAR5:
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR2[VAR4]);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
