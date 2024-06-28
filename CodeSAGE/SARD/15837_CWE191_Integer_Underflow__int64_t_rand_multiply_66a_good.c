#ifndef VAR1
void FUN1(int64_t VAR2[]);
static void FUN2()
{
 int64_t VAR3;
 int64_t VAR2[5];
 VAR3 = 0LL;
 VAR3 = -2;
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN3(int64_t VAR2[]);
static void FUN4()
{
 int64_t VAR3;
 int64_t VAR2[5];
 VAR3 = 0LL;
 VAR3 = (VAR4)FUN5();
 VAR2[2] = VAR3;
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN4();
}
#endif
