#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)FUN2(10*sizeof(VAR2));
 if(VAR4==5)
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<(10/2); VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 }
 if(VAR4!=5)
 {
 FUN3("");
 }
 else
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN4(VAR3[VAR5].VAR6);
 FUN4(VAR3[VAR5].VAR7);
 }
 }
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)FUN2(10*sizeof(VAR2));
 if(VAR4==5)
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<(10/2); VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 }
 if(VAR4==5)
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN4(VAR3[VAR5].VAR6);
 FUN4(VAR3[VAR5].VAR7);
 }
 }
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)FUN2(10*sizeof(VAR2));
 if(VAR4!=5)
 {
 FUN3("");
 }
 else
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 }
 if(VAR4==5)
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN4(VAR3[VAR5].VAR6);
 FUN4(VAR3[VAR5].VAR7);
 }
 }
 }
}
static void FUN7()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)FUN2(10*sizeof(VAR2));
 if(VAR4==5)
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 VAR3[VAR5].VAR6 = VAR5;
 VAR3[VAR5].VAR7 = VAR5;
 }
 }
 }
 if(VAR4==5)
 {
 {
 int VAR5;
 for(VAR5=0; VAR5<10; VAR5++)
 {
 FUN4(VAR3[VAR5].VAR6);
 FUN4(VAR3[VAR5].VAR7);
 }
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
