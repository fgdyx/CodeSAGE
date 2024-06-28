#ifndef VAR1
static void FUN1()
{
 int64_t VAR2;
 VAR2 = 0LL;
 VAR2 = 2;
 {
 int64_t VAR3 = VAR2;
 int64_t VAR2 = VAR3;
 if(VAR2 > 0)
 {
 int64_t VAR4 = VAR2 * 2;
 FUN2(VAR4);
 }
 }
}
static void FUN3()
{
 int64_t VAR2;
 VAR2 = 0LL;
 fscanf (stdin, "", &VAR2);
 {
 int64_t VAR3 = VAR2;
 int64_t VAR2 = VAR3;
 if(VAR2 > 0)
 {
 if (VAR2 < (VAR5/2))
 {
 int64_t VAR4 = VAR2 * 2;
 FUN2(VAR4);
 }
 else
 {
 FUN4("");
 }
 }
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
