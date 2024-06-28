#ifndef VAR1
static void FUN1(int VAR2)
{
 {
 int VAR3 = VAR2 * VAR2;
 FUN2(VAR3);
 }
}
static void FUN3()
{
 int VAR2;
 void (*VAR4) (int) = VAR5;
 VAR2 = 0;
 VAR2 = 2;
 FUN4(VAR2);
}
static void FUN5(int VAR2)
{
 if (FUN6((long)VAR2) <= (long)FUN7((double)VAR6))
 {
 int VAR3 = VAR2 * VAR2;
 FUN2(VAR3);
 }
 else
 {
 FUN8("");
 }
}
static void FUN9()
{
 int VAR2;
 void (*VAR4) (int) = VAR7;
 VAR2 = 0;
 VAR2 = VAR6;
 FUN4(VAR2);
}
void FUN10()
{
 FUN3();
 FUN9();
}
#endif
