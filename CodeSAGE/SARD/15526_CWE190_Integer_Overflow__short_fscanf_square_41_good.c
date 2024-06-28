#ifndef VAR1
static void FUN1(short VAR2)
{
 {
 short VAR3 = VAR2 * VAR2;
 FUN2(VAR3);
 }
}
static void FUN3()
{
 short VAR2;
 VAR2 = 0;
 VAR2 = 2;
 FUN1(VAR2);
}
static void FUN4(short VAR2)
{
 if (FUN5((long)VAR2) <= (long)FUN6((double)VAR4))
 {
 short VAR3 = VAR2 * VAR2;
 FUN2(VAR3);
 }
 else
 {
 FUN7("");
 }
}
static void FUN8()
{
 short VAR2;
 VAR2 = 0;
 fscanf (stdin, "", &VAR2);
 FUN4(VAR2);
}
void FUN9()
{
 FUN8();
 FUN3();
}
#endif
