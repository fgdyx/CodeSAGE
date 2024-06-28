#ifndef VAR1
static void FUN1()
{
 short VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 fscanf (stdin, "", &VAR2);
 }
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 if(VAR2 < 0)
 {
 if (VAR2 > (VAR3/2))
 {
 short VAR4 = VAR2 * 2;
 FUN5(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
static void FUN6()
{
 short VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 fscanf (stdin, "", &VAR2);
 }
 if(FUN2())
 {
 if(VAR2 < 0)
 {
 if (VAR2 > (VAR3/2))
 {
 short VAR4 = VAR2 * 2;
 FUN5(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
static void FUN7()
{
 short VAR2;
 VAR2 = 0;
 if(FUN3())
 {
 FUN4("");
 }
 else
 {
 VAR2 = -2;
 }
 if(FUN2())
 {
 if(VAR2 < 0)
 {
 short VAR4 = VAR2 * 2;
 FUN5(VAR4);
 }
 }
}
static void FUN8()
{
 short VAR2;
 VAR2 = 0;
 if(FUN2())
 {
 VAR2 = -2;
 }
 if(FUN2())
 {
 if(VAR2 < 0)
 {
 short VAR4 = VAR2 * 2;
 FUN5(VAR4);
 }
 }
}
void FUN9()
{
 FUN1();
 FUN6();
 FUN7();
 FUN8();
}
#endif
