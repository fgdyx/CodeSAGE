#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(malloc(10*sizeof(VAR2)));
 if(FUN2())
 {
 ;
 }
 if(FUN3())
 {
 FUN4("");
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
 FUN5(VAR3[VAR4].VAR5);
 FUN5(VAR3[VAR4].VAR6);
 }
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(malloc(10*sizeof(VAR2)));
 if(FUN2())
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
 FUN5(VAR3[VAR4].VAR5);
 FUN5(VAR3[VAR4].VAR6);
 }
 }
}
static void FUN7()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(malloc(10*sizeof(VAR2)));
 if(FUN3())
 {
 FUN4("");
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
 FUN5(VAR3[VAR4].VAR5);
 FUN5(VAR3[VAR4].VAR6);
 }
 }
}
static void FUN8()
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
 if(FUN2())
 {
 for(int VAR4=0; VAR4<10; VAR4++)
 {
 FUN5(VAR3[VAR4].VAR5);
 FUN5(VAR3[VAR4].VAR6);
 }
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
