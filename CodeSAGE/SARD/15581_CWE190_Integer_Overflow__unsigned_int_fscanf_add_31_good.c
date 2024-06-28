#ifndef VAR1
static void FUN1()
{
 unsigned int VAR2;
 VAR2 = 0;
 VAR2 = 2;
 {
 unsigned int VAR3 = VAR2;
 unsigned int VAR2 = VAR3;
 {
 unsigned int VAR4 = VAR2 + 1;
 FUN2(VAR4);
 }
 }
}
static void FUN3()
{
 unsigned int VAR2;
 VAR2 = 0;
 fscanf (stdin, "", &VAR2);
 {
 unsigned int VAR3 = VAR2;
 unsigned int VAR2 = VAR3;
 if (VAR2 < VAR5)
 {
 unsigned int VAR4 = VAR2 + 1;
 FUN2(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
