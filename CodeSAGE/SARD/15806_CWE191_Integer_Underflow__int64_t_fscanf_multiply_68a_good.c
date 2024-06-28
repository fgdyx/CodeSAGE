#ifndef VAR1
void FUN1();
void FUN2();
static void FUN3()
{
 int64_t VAR2;
 VAR2 = 0LL;
 VAR2 = -2;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 int64_t VAR2;
 VAR2 = 0LL;
 fscanf (stdin, "", &VAR2);
 VAR4 = VAR2;
 FUN2();
}
void FUN5()
{
 FUN3();
 FUN4();
}
#endif
