#ifndef VAR1
static void FUN1(short VAR2)
{
 {
 short VAR3 = VAR2 - 1;
 FUN2(VAR3);
 }
}
static void FUN3()
{
 short VAR2;
 void (*VAR4) (short) = VAR5;
 VAR2 = 0;
 VAR2 = -2;
 FUN4(VAR2);
}
static void FUN5(short VAR2)
{
 if (VAR2 > VAR6)
 {
 short VAR3 = VAR2 - 1;
 FUN2(VAR3);
 }
 else
 {
 FUN6("");
 }
}
static void FUN7()
{
 short VAR2;
 void (*VAR4) (short) = VAR7;
 VAR2 = 0;
 fscanf (stdin, "", &VAR2);
 FUN4(VAR2);
}
void FUN8()
{
 FUN3();
 FUN7();
}
#endif
