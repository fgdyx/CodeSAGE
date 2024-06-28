#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int &VAR3 = VAR2;
 VAR2 = -1;
 VAR2 = 7;
 {
 int VAR2 = VAR3;
 FUN2(100 % VAR2);
 }
}
static void FUN3()
{
 int VAR2;
 int &VAR3 = VAR2;
 VAR2 = -1;
 {
 char VAR4[VAR5] = "";
 if (fgets(VAR4, VAR5, stdin) != NULL)
 {
 VAR2 = FUN4(VAR4);
 }
 else
 {
 FUN5("");
 }
 }
 {
 int VAR2 = VAR3;
 if( VAR2 != 0 )
 {
 FUN2(100 % VAR2);
 }
 else
 {
 FUN5("");
 }
 }
}
void FUN6()
{
 FUN1();
 FUN3();
}
#endif
