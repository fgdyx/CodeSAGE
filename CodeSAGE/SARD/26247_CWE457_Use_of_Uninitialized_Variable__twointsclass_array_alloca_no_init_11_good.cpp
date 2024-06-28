#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(FUN2(10*sizeof(VAR2)));
 if(FUN3())
 {
 ;
 }
 if(FUN4())
 {
 FUN5("");
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
 FUN6(VAR3[VAR4].VAR5);
 FUN6(VAR3[VAR4].VAR6);
 }
 }
}
static void FUN7()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(FUN2(10*sizeof(VAR2)));
 if(FUN3())
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
 FUN6(VAR3[VAR4].VAR5);
 FUN6(VAR3[VAR4].VAR6);
 }
 }
}
static void FUN8()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(FUN2(10*sizeof(VAR2)));
 if(FUN4())
 {
 FUN5("");
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
 FUN6(VAR3[VAR4].VAR5);
 FUN6(VAR3[VAR4].VAR6);
 }
 }
}
static void FUN9()
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
 if(FUN3())
 {
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 FUN6(VAR3[VAR4].VAR5);
 FUN6(VAR3[VAR4].VAR6);
 }
 }
}
void FUN10()
{
 FUN1();
 FUN7();
 FUN8();
 FUN9();
}
#endif
