#ifndef VAR1
static void FUN1()
{
 short VAR2;
 VAR2 = 0;
 VAR2 = 2;
 if(VAR2 > 0)
 {
 short VAR3 = VAR2 * 2;
 FUN2(VAR3);
 }
}
static void FUN3()
{
 short VAR2;
 VAR2 = 0;
 fscanf (stdin, "", &VAR2);
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR4/2))
 {
 short VAR3 = VAR2 * 2;
 FUN2(VAR3);
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
