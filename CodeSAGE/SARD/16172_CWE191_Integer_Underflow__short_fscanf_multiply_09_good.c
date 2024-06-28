#ifndef VAR1
static void FUN1()
{
 short VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 fscanf (stdin, "", &VAR2);
 }
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 if(VAR2 < 0)
 {
 if (VAR2 > (VAR5/2))
 {
 short VAR6 = VAR2 * 2;
 FUN3(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN4()
{
 short VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 fscanf (stdin, "", &VAR2);
 }
 if(VAR3)
 {
 if(VAR2 < 0)
 {
 if (VAR2 > (VAR5/2))
 {
 short VAR6 = VAR2 * 2;
 FUN3(VAR6);
 }
 else
 {
 FUN2("");
 }
 }
 }
}
static void FUN5()
{
 short VAR2;
 VAR2 = 0;
 if(VAR4)
 {
 FUN2("");
 }
 else
 {
 VAR2 = -2;
 }
 if(VAR3)
 {
 if(VAR2 < 0)
 {
 short VAR6 = VAR2 * 2;
 FUN3(VAR6);
 }
 }
}
static void FUN6()
{
 short VAR2;
 VAR2 = 0;
 if(VAR3)
 {
 VAR2 = -2;
 }
 if(VAR3)
 {
 if(VAR2 < 0)
 {
 short VAR6 = VAR2 * 2;
 FUN3(VAR6);
 }
 }
}
void FUN7()
{
 FUN1();
 FUN4();
 FUN5();
 FUN6();
}
#endif
