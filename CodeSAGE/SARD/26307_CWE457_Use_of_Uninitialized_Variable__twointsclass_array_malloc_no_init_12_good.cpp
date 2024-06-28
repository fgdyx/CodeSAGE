#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(malloc(10*sizeof(VAR2)));
 if(FUN2())
 {
 ;
 }
 else
 {
 ;
 }
 if(FUN2())
 {
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
 }
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR3[VAR4].VAR5);
 FUN3(VAR3[VAR4].VAR6);
 }
 }
 else
 {
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
 }
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR3[VAR4].VAR5);
 FUN3(VAR3[VAR4].VAR6);
 }
 }
}
static void FUN4()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(malloc(10*sizeof(VAR2)));
 if(FUN2())
 {
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
 }
 }
 else
 {
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
 }
 }
 if(FUN2())
 {
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR3[VAR4].VAR5);
 FUN3(VAR3[VAR4].VAR6);
 }
 }
 else
 {
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 FUN3(VAR3[VAR4].VAR5);
 FUN3(VAR3[VAR4].VAR6);
 }
 }
}
void FUN5()
{
 FUN1();
 FUN4();
}
#endif
