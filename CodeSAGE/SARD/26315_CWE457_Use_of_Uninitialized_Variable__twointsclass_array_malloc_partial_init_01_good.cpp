#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(malloc(10*sizeof(VAR2)));
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
 }
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 FUN2(VAR3[VAR4].VAR5);
 FUN2(VAR3[VAR4].VAR6);
 }
}
static void FUN3()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(malloc(10*sizeof(VAR2)));
 for(int VAR4=0; VAR4<(10/2); VAR4++)
 {
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
 }
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
 }
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 FUN2(VAR3[VAR4].VAR5);
 FUN2(VAR3[VAR4].VAR6);
 }
}
void FUN4()
{
 FUN1();
 FUN3();
}
#endif
