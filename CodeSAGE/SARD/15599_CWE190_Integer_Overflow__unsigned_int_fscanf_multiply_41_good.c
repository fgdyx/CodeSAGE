#ifndef VAR1
static void FUN1(unsigned int VAR2)
{
 if(VAR2 > 0)
 {
 unsigned int VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
}
static void FUN3()
{
 unsigned int VAR2;
 VAR2 = 0;
 VAR2 = 2;
 FUN1(VAR2);
}
static void FUN4(unsigned int VAR2)
{
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR4/2))
 {
 unsigned int VAR3 = VAR2 * 2;
 FUN2(VAR3);
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
 FUN4(VAR2);
}
void FUN7()
{
 FUN6();
 FUN3();
}
#endif
