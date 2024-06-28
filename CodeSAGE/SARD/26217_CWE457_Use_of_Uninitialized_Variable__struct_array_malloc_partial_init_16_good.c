#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)malloc(10*sizeof(VAR2));
 while(1)
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<(10/2); VAR4++)
 {
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
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
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
 }
 }
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 FUN2(VAR3[VAR4].VAR5);
 FUN2(VAR3[VAR4].VAR6);
 }
 }
 break;
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)malloc(10*sizeof(VAR2));
 while(1)
 {
 {
 int VAR4;
 for(VAR4=0; VAR4<10; VAR4++)
 {
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
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
 FUN2(VAR3[VAR4].VAR5);
 FUN2(VAR3[VAR4].VAR6);
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
