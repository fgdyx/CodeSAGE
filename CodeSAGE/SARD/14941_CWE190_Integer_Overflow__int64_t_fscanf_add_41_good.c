#ifndef VAR1
static void FUN1(int64_t VAR2)
{
 {
 int64_t VAR3 = VAR2 + 1;
 FUN2(VAR3);
 }
}
static void FUN3()
{
 int64_t VAR2;
 VAR2 = 0LL;
 VAR2 = 2;
 FUN1(VAR2);
}
static void FUN4(int64_t VAR2)
{
 if (VAR2 < VAR4)
 {
 int64_t VAR3 = VAR2 + 1;
 FUN2(VAR3);
 }
 else
 {
 FUN5("");
 }
}
static void FUN6()
{
 int64_t VAR2;
 VAR2 = 0LL;
 fscanf (stdin, "", &VAR2);
 FUN4(VAR2);
}
void FUN7()
{
 FUN6();
 FUN3();
}
#endif
