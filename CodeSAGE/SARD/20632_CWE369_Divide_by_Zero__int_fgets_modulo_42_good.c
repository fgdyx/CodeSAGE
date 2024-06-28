#ifndef VAR1
static int FUN1(int VAR2)
{
 VAR2 = 7;
 return VAR2;
}
static void FUN2()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN1(VAR2);
 FUN3(100 % VAR2);
}
static int FUN4(int VAR2)
{
 {
 char VAR3[VAR4] = "";
 if (fgets(VAR3, VAR4, stdin) != NULL)
 {
 VAR2 = FUN5(VAR3);
 }
 else
 {
 FUN6("");
 }
 }
 return VAR2;
}
static void FUN7()
{
 int VAR2;
 VAR2 = -1;
 VAR2 = FUN4(VAR2);
 if( VAR2 != 0 )
 {
 FUN3(100 % VAR2);
 }
 else
 {
 FUN6("");
 }
}
void FUN8()
{
 FUN7();
 FUN2();
}
#endif
