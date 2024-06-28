#ifndef VAR1
static void FUN1()
{
 int64_t VAR2;
 VAR3 &VAR4 = VAR2;
 VAR2 = 0LL;
 VAR2 = 2;
 {
 int64_t VAR2 = VAR4;
 {
 int64_t VAR5 = VAR2 + 1;
 FUN2(VAR5);
 }
 }
}
static void FUN3()
{
 int64_t VAR2;
 VAR3 &VAR4 = VAR2;
 VAR2 = 0LL;
 fscanf (stdin, "", &VAR2);
 {
 int64_t VAR2 = VAR4;
 if (VAR2 < VAR6)
 {
 int64_t VAR5 = VAR2 + 1;
 FUN2(VAR5);
 }
 else
 {
 FUN4("");
 }
 }
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
