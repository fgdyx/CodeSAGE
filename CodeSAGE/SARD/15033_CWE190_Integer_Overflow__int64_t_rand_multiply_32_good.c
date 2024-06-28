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
 if(VAR2 > 0)
 {
 int64_t VAR6 = VAR2 * 2;
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
 VAR2 = (VAR3)FUN4();
 *VAR4 = VAR2;
 }
 {
 int64_t VAR2 = *VAR5;
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR7/2))
 {
 int64_t VAR6 = VAR2 * 2;
 FUN2(VAR6);
 }
 else
 {
 FUN5("");
 }
 }
 }
}
void FUN6()
{
 FUN1();
 FUN3();
}
#endif
