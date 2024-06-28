#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = new int[10];
 goto VAR3;
VAR3:
 ;
 goto VAR4;
VAR4:
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR2[VAR5] = VAR5;
 }
 }
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN2(VAR2[VAR5]);
 }
 }
 delete [] VAR2;
}
static void FUN3()
{
 int * VAR2;
 VAR2 = new int[10];
 goto VAR3;
VAR3:
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR2[VAR5] = VAR5;
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
 delete [] VAR2;
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
