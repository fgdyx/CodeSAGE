#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(FUN2(10*sizeof(VAR2)));
 if(VAR4)
 {
 for(int VAR5=0; VAR5<(10/2); VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 if(VAR8)
 {
 FUN3("");
 }
 else
 {
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 FUN4(VAR3[VAR5].VAR6);
 FUN4(VAR3[VAR5].VAR7);
 }
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(FUN2(10*sizeof(VAR2)));
 if(VAR4)
 {
 for(int VAR5=0; VAR5<(10/2); VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 if(VAR4)
 {
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 FUN4(VAR3[VAR5].VAR6);
 FUN4(VAR3[VAR5].VAR7);
 }
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(FUN2(10*sizeof(VAR2)));
 if(VAR8)
 {
 FUN3("");
 }
 else
 {
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 if(VAR4)
 {
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 FUN4(VAR3[VAR5].VAR6);
 FUN4(VAR3[VAR5].VAR7);
 }
 }
}
static void FUN7()
{
 VAR2 * VAR3;
 VAR3 = reinterpret_cast<VAR2 *>(FUN2(10*sizeof(VAR2)));
 if(VAR4)
 {
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 if(VAR4)
 {
 for(int VAR5=0; VAR5<10; VAR5++)
 {
 FUN4(VAR3[VAR5].VAR6);
 FUN4(VAR3[VAR5].VAR7);
 }
 }
}
void FUN8()
{
 FUN1();
 FUN5();
 FUN6();
 FUN7();
}
#endif
