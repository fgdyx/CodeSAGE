#ifndef VAR1
static void FUN1()
{
 unsigned int VAR2 = VAR3;
 if(VAR2 > 0)
 {
 unsigned int VAR4 = VAR2 * 2;
 FUN2(VAR4);
 }
}
static void FUN3()
{
 unsigned int VAR2;
 VAR2 = 0;
 VAR2 = 2;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 unsigned int VAR2 = VAR5;
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR6/2))
 {
 unsigned int VAR4 = VAR2 * 2;
 FUN2(VAR4);
 }
 else
 {
 FUN5("");
 }
 }
}
static void FUN6()
{
 unsigned int VAR2;
 VAR2 = 0;
 fscanf (stdin, "", &VAR2);
 VAR5 = VAR2;
 FUN4();
}
void FUN7()
{
 FUN3();
 FUN6();
}
#endif
