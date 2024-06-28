#ifndef VAR1
static void FUN1()
{
 unsigned int VAR2;
 VAR2 = 0;
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
 if (VAR2 < VAR3)
 {
 unsigned int VAR4 = VAR2 + 1;
 FUN3(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
 else
 {
 if (VAR2 < VAR3)
 {
 unsigned int VAR4 = VAR2 + 1;
 FUN3(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
static void FUN5()
{
 unsigned int VAR2;
 VAR2 = 0;
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
 {
 unsigned int VAR4 = VAR2 + 1;
 FUN3(VAR4);
 }
 }
 else
 {
 {
 unsigned int VAR4 = VAR2 + 1;
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
