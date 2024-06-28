#ifndef VAR1
static void FUN1()
{
 double * VAR2;
 double VAR3[10];
 VAR2 = VAR3;
 goto VAR4;
VAR4:
 ;
 goto VAR5;
VAR5:
 {
 int VAR6;
 for(VAR6=0; VAR6<10; VAR6++)
 {
 VAR2[VAR6] = (double)VAR6;
 }
 }
 {
 int VAR6;
 for(VAR6=0; VAR6<10; VAR6++)
 {
 FUN2(VAR2[VAR6]);
 }
 }
}
static void FUN3()
{
 double * VAR2;
 double VAR3[10];
 VAR2 = VAR3;
 goto VAR4;
VAR4:
 {
 int VAR6;
 for(VAR6=0; VAR6<10; VAR6++)
 {
 VAR2[VAR6] = (double)VAR6;
 }
 }
 goto VAR5;
VAR5:
 {
 int VAR6;
 for(VAR6=0; VAR6<10; VAR6++)
 {
 FUN2(VAR2[VAR6]);
 }
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
