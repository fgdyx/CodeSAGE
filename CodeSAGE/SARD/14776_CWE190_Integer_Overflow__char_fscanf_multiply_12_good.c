#ifndef VAR1
static void FUN1()
{
 char VAR2;
 VAR2 = '';
 if(FUN2())
 {
 fscanf (stdin, "", &VAR2);
 }
 else
 {
 fscanf (stdin, "", &VAR2);
 }
 if(FUN2())
 {
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR3/2))
 {
 char VAR4 = VAR2 * 2;
 FUN3(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
 }
 else
 {
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR3/2))
 {
 char VAR4 = VAR2 * 2;
 FUN3(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
static void FUN5()
{
 char VAR2;
 VAR2 = '';
 if(FUN2())
 {
 VAR2 = 2;
 }
 else
 {
 VAR2 = 2;
 }
 if(FUN2())
 {
 if(VAR2 > 0)
 {
 char VAR4 = VAR2 * 2;
 FUN3(VAR4);
 }
 }
 else
 {
 if(VAR2 > 0)
 {
 char VAR4 = VAR2 * 2;
 FUN3(VAR4);
 }
 }
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
