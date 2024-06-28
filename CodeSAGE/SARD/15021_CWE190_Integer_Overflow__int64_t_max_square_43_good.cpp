#ifndef VAR1
static void FUN1(VAR2 &VAR3)
{
 VAR3 = 2;
}
static void FUN2()
{
 int64_t VAR3;
 VAR3 = 0LL;
 FUN1(VAR3);
 {
 int64_t VAR4 = VAR3 * VAR3;
 FUN3(VAR4);
 }
}
static void FUN4(VAR2 &VAR3)
{
 VAR3 = VAR5;
}
static void FUN5()
{
 int64_t VAR3;
 VAR3 = 0LL;
 FUN4(VAR3);
 if (FUN6((long)VAR3) <= (long)FUN7((double)VAR5))
 {
 int64_t VAR4 = VAR3 * VAR3;
 FUN3(VAR4);
 }
 else
 {
 FUN8("");
 }
}
void FUN9()
{
 FUN2();
 FUN5();
}
#endif
