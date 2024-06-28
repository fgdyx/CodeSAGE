#ifndef VAR1
static void FUN1()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)FUN2(10*sizeof(VAR2));
 if(VAR4)
 {
 ;
 }
 if(VAR5)
 {
 FUN3("");
 }
 else
 {
 {
 int VAR6;
 for(VAR6=0; VAR6<10; VAR6++)
 {
 VAR3[VAR6].VAR7 = VAR6;
 VAR3[VAR6].VAR8 = VAR6;
 }
 }
 {
 int VAR6;
 for(VAR6=0; VAR6<10; VAR6++)
 {
 FUN4(VAR3[VAR6].VAR7);
 FUN4(VAR3[VAR6].VAR8);
 }
 }
 }
}
static void FUN5()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)FUN2(10*sizeof(VAR2));
 if(VAR4)
 {
 ;
 }
 if(VAR4)
 {
 {
 int VAR6;
 for(VAR6=0; VAR6<10; VAR6++)
 {
 VAR3[VAR6].VAR7 = VAR6;
 VAR3[VAR6].VAR8 = VAR6;
 }
 }
 {
 int VAR6;
 for(VAR6=0; VAR6<10; VAR6++)
 {
 FUN4(VAR3[VAR6].VAR7);
 FUN4(VAR3[VAR6].VAR8);
 }
 }
 }
}
static void FUN6()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)FUN2(10*sizeof(VAR2));
 if(VAR5)
 {
 FUN3("");
 }
 else
 {
 {
 int VAR6;
 for(VAR6=0; VAR6<10; VAR6++)
 {
 VAR3[VAR6].VAR7 = VAR6;
 VAR3[VAR6].VAR8 = VAR6;
 }
 }
 }
 if(VAR4)
 {
 {
 int VAR6;
 for(VAR6=0; VAR6<10; VAR6++)
 {
 FUN4(VAR3[VAR6].VAR7);
 FUN4(VAR3[VAR6].VAR8);
 }
 }
 }
}
static void FUN7()
{
 VAR2 * VAR3;
 VAR3 = (VAR2 *)FUN2(10*sizeof(VAR2));
 if(VAR4)
 {
 {
 int VAR6;
 for(VAR6=0; VAR6<10; VAR6++)
 {
 VAR3[VAR6].VAR7 = VAR6;
 VAR3[VAR6].VAR8 = VAR6;
 }
 }
 }
 if(VAR4)
 {
 {
 int VAR6;
 for(VAR6=0; VAR6<10; VAR6++)
 {
 FUN4(VAR3[VAR6].VAR7);
 FUN4(VAR3[VAR6].VAR8);
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
