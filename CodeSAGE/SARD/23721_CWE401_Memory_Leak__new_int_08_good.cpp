#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new int;
 *VAR2 = 5;
 FUN3(*VAR2);
 }
 if(FUN4())
 {
 FUN5("");
 }
 else
 {
 delete VAR2;
 }
}
static void FUN6()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = new int;
 *VAR2 = 5;
 FUN3(*VAR2);
 }
 if(FUN2())
 {
 delete VAR2;
 }
}
static void FUN7()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN4())
 {
 FUN5("");
 }
 else
 {
 int VAR3;
 VAR2 = &VAR3;
 *VAR2 = 5;
 FUN3(*VAR2);
 }
 if(FUN2())
 {
 ;
 }
}
static void FUN8()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 int VAR3;
 VAR2 = &VAR3;
 *VAR2 = 5;
 FUN3(*VAR2);
 }
 if(FUN2())
 {
 ;
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
