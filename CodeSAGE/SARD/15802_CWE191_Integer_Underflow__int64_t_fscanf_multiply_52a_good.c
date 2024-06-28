#ifndef VAR1
void FUN1(int64_t VAR2);
static void FUN2()
{
 int64_t VAR2;
 VAR2 = 0LL;
 VAR2 = -2;
 FUN1(VAR2);
}
void FUN3(int64_t VAR2);
static void FUN4()
{
 int64_t VAR2;
 VAR2 = 0LL;
 fscanf (stdin, "", &VAR2);
 FUN3(VAR2);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
