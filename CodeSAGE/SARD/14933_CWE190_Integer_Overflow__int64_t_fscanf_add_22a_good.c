#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(int64_t VAR5);
static void FUN2()
{
 int64_t VAR5;
 VAR5 = 0LL;
 fscanf (stdin, "", &VAR5);
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN3(int64_t VAR5);
static void FUN4()
{
 int64_t VAR5;
 VAR5 = 0LL;
 fscanf (stdin, "", &VAR5);
 VAR3 = 1;
 FUN3(VAR5);
}
void FUN5(int64_t VAR5);
static void FUN6()
{
 int64_t VAR5;
 VAR5 = 0LL;
 VAR5 = 2;
 VAR4 = 1;
 FUN5(VAR5);
}
void FUN7()
{
 FUN2();
 FUN4();
 FUN6();
}
#endif
