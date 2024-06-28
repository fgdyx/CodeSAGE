#ifndef VAR1
static void FUN1()
{
 int VAR2;
 VAR2 = -1;
 if(5==5)
 {
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 }
 if(5!=5)
 {
 FUN3("");
 }
 else
 {
 if( VAR2 != 0 )
 {
 FUN4(100 % VAR2);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN5()
{
 int VAR2;
 VAR2 = -1;
 if(5==5)
 {
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN2(VAR3);
 }
 else
 {
 FUN3("");
 }
 }
 }
 if(5==5)
 {
 if( VAR2 != 0 )
 {
 FUN4(100 % VAR2);
 }
 else
 {
 FUN3("");
 }
 }
}
static void FUN6()
{
 int VAR2;
 VAR2 = -1;
 if(5!=5)
 {
 FUN3("");
 }
 else
 {
 VAR2 = 7;
 }
 if(5==5)
 {
 FUN4(100 % VAR2);
 }
}
static void FUN7()
{
 int VAR2;
 VAR2 = -1;
 if(5==5)
 {
 VAR2 = 7;
 }
 if(5==5)
 {
 FUN4(100 % VAR2);
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
