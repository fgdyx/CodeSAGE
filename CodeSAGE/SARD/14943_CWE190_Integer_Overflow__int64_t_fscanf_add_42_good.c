#ifndef VAR1
static VAR2 FUN1(int64_t VAR3)
{
 VAR3 = 2;
 return VAR3;
}
static void FUN2()
{
 int64_t VAR3;
 VAR3 = 0LL;
 VAR3 = FUN1(VAR3);
 {
 int64_t VAR4 = VAR3 + 1;
 FUN3(VAR4);
 }
}
static VAR2 FUN4(int64_t VAR3)
{
 fscanf (stdin, "", &VAR3);
 return VAR3;
}
static void FUN5()
{
 int64_t VAR3;
 VAR3 = 0LL;
 VAR3 = FUN4(VAR3);
 if (VAR3 < VAR5)
 {
 int64_t VAR4 = VAR3 + 1;
 FUN3(VAR4);
 }
 else
 {
 FUN6("");
 }
}
void FUN7()
{
 FUN5();
 FUN2();
}
#endif
