#ifndef VAR1
static void FUN1()
{
 int64_t VAR2 = VAR3;
 {
 int64_t VAR4 = VAR2 * VAR2;
 FUN2(VAR4);
 }
}
static void FUN3()
{
 int64_t VAR2;
 VAR2 = 0LL;
 VAR2 = 2;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 int64_t VAR2 = VAR5;
 if (FUN5((long)VAR2) <= (long)FUN6((double)VAR6))
 {
 int64_t VAR4 = VAR2 * VAR2;
 FUN2(VAR4);
 }
 else
 {
 FUN7("");
 }
}
static void FUN8()
{
 int64_t VAR2;
 VAR2 = 0LL;
 VAR2 = VAR6;
 VAR5 = VAR2;
 FUN4();
}
void FUN9()
{
 FUN3();
 FUN8();
}
#endif
