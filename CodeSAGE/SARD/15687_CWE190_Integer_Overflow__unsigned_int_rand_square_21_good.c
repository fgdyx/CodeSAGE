#ifndef VAR1
static int VAR2 = 0;
static int VAR3 = 0;
static int VAR4 = 0;
static void FUN1(unsigned int VAR5)
{
 if(VAR2)
 {
 FUN2("");
 }
 else
 {
 if (FUN3((long)VAR5) <= (long)FUN4((double)VAR6))
 {
 unsigned int VAR7 = VAR5 * VAR5;
 FUN5(VAR7);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN6()
{
 unsigned int VAR5;
 VAR5 = 0;
 VAR5 = (unsigned int)FUN7();
 VAR2 = 0;
 FUN1(VAR5);
}
static void FUN8(unsigned int VAR5)
{
 if(VAR3)
 {
 if (FUN3((long)VAR5) <= (long)FUN4((double)VAR6))
 {
 unsigned int VAR7 = VAR5 * VAR5;
 FUN5(VAR7);
 }
 else
 {
 FUN2("");
 }
 }
}
static void FUN9()
{
 unsigned int VAR5;
 VAR5 = 0;
 VAR5 = (unsigned int)FUN7();
 VAR3 = 1;
 FUN8(VAR5);
}
static void FUN10(unsigned int VAR5)
{
 if(VAR4)
 {
 {
 unsigned int VAR7 = VAR5 * VAR5;
 FUN5(VAR7);
 }
 }
}
static void FUN11()
{
 unsigned int VAR5;
 VAR5 = 0;
 VAR5 = 2;
 VAR4 = 1;
 FUN10(VAR5);
}
void FUN12()
{
 FUN6();
 FUN9();
 FUN11();
}
#endif
