#ifndef VAR1
static void FUN1()
{
 int64_t VAR2;
 VAR3 *VAR4 = &VAR2;
 VAR3 *VAR5 = &VAR2;
 VAR2 = 0LL;
 {
 int64_t VAR2 = *VAR4;
 VAR2 = 2;
 *VAR4 = VAR2;
 }
 {
 int64_t VAR2 = *VAR5;
 {
 int64_t VAR6 = VAR2 * VAR2;
 FUN2(VAR6);
 }
 }
}
static void FUN3()
{
 int64_t VAR2;
 VAR3 *VAR4 = &VAR2;
 VAR3 *VAR5 = &VAR2;
 VAR2 = 0LL;
 {
 int64_t VAR2 = *VAR4;
 VAR2 = VAR7;
 *VAR4 = VAR2;
 }
 {
 int64_t VAR2 = *VAR5;
 if (FUN4((long)VAR2) <= (long)FUN5((double)VAR7))
 {
 int64_t VAR6 = VAR2 * VAR2;
 FUN2(VAR6);
 }
 else
 {
 FUN6("");
 }
 }
}
void FUN7()
{
 FUN1();
 FUN3();
}
#endif
