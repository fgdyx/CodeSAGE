#ifndef VAR1
void FUN1(VAR2 &VAR3);
static void FUN2()
{
 int64_t VAR3;
 VAR3 = 0LL;
 FUN1(VAR3);
 if(VAR3 > 0)
 {
 int64_t VAR4 = VAR3 * 2;
 FUN3(VAR4);
 }
}
void FUN4(VAR2 &VAR3);
static void FUN5()
{
 int64_t VAR3;
 VAR3 = 0LL;
 FUN4(VAR3);
 if(VAR3 > 0)
 {
 if (VAR3 < (VAR5/2))
 {
 int64_t VAR4 = VAR3 * 2;
 FUN3(VAR4);
 }
 else
 {
 FUN6("");
 }
 }
}
void FUN7()
{
 FUN2();
 FUN5();
}
#endif
