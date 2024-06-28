#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(FUN2(10*sizeof(VAR2)));
 if(FUN3())
 {
 ;
 }
 else
 {
 ;
 }
 if(FUN3())
 {
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 VAR3[VAR4].VAR5 = VAR4;
 VAR3[VAR4].VAR6 = VAR4;
 }
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 FUN4(VAR3[VAR4].VAR5);
 FUN4(VAR3[VAR4].VAR6);
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
 FUN4(VAR3[VAR4].VAR5);
 FUN4(VAR3[VAR4].VAR6);
 }
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(FUN2(10*sizeof(VAR2)));
 if(FUN3())
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
 if(FUN3())
 {
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 FUN4(VAR3[VAR4].VAR5);
 FUN4(VAR3[VAR4].VAR6);
 }
 }
 else
 {
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 FUN4(VAR3[VAR4].VAR5);
 FUN4(VAR3[VAR4].VAR6);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
