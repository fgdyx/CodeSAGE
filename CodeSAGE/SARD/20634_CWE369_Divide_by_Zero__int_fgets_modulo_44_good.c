#ifndef VAR1
static void FUN1(int VAR2)
{
 FUN2(100 % VAR2);
}
static void FUN3()
{
 int VAR2;
 void (*VAR3) (int) = VAR4;
 VAR2 = -1;
 VAR2 = 7;
 FUN4(VAR2);
}
static void FUN5(int VAR2)
{
 if( VAR2 != 0 )
 {
 FUN2(100 % VAR2);
 }
 else
 {
 FUN6("");
 }
}
static void FUN7()
{
 int VAR2;
 void (*VAR3) (int) = VAR5;
 VAR2 = -1;
 {
 char VAR6[VAR7] = "";
 if (fgets(VAR6, VAR7, stdin) != NULL)
 {
 VAR2 = FUN8(VAR6);
 }
 else
 {
 FUN6("");
 }
 }
 FUN4(VAR2);
}
void FUN9()
{
 FUN3();
 FUN7();
}
#endif
