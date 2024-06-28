#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = new int[10];
 while(1)
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<(10/2); VAR3++)
 {
 VAR2[VAR3] = VAR3;
 }
 }
 break;
 }
 while(1)
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = VAR3;
 }
 }
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN2(VAR2[VAR3]);
 }
 }
 delete [] VAR2;
 break;
 }
}
static void FUN3()
{
 int * VAR2;
 VAR2 = new int[10];
 while(1)
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 VAR2[VAR3] = VAR3;
 }
 }
 break;
 }
 while(1)
 {
 {
 int VAR3;
 for(VAR3=0; VAR3<10; VAR3++)
 {
 FUN2(VAR2[VAR3]);
 }
 }
 delete [] VAR2;
 break;
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
