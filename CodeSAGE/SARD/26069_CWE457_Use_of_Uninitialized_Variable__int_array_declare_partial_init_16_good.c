#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 int VAR3[10];
 VAR2 = VAR3;
 while(1)
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<(10/2); VAR4++)
 {
 VAR2[VAR4] = VAR4;
 }
 }
 break;
 }
 while(1)
 {
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
 FUN2(VAR2[VAR4]);
 }
 }
 break;
 }
}
static void FUN3()
{
 int * VAR2;
 int VAR3[10];
 VAR2 = VAR3;
 while(1)
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR2[VAR4] = VAR4;
 }
 }
 break;
 }
 while(1)
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN2(VAR2[VAR4]);
 }
 }
 break;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
