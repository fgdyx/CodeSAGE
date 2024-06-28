#ifndef VAR1
static unsigned int FUN1(unsigned int VAR2)
{
 VAR2 = 2;
 return VAR2;
}
static void FUN2()
{
 unsigned int VAR2;
 VAR2 = 0;
 VAR2 = FUN1(VAR2);
 if(VAR2 > 0)
 {
 unsigned int VAR3 = VAR2 * 2;
 FUN3(VAR3);
 }
}
static unsigned int FUN4(unsigned int VAR2)
{
 fscanf (stdin, "", &VAR2);
 return VAR2;
}
static void FUN5()
{
 unsigned int VAR2;
 VAR2 = 0;
 VAR2 = FUN4(VAR2);
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR4/2))
 {
 unsigned int VAR3 = VAR2 * 2;
 FUN3(VAR3);
 }
 else
 {
 FUN6("");
 }
 }
}
void FUN7()
{
 FUN5();
 FUN2();
}
#endif
