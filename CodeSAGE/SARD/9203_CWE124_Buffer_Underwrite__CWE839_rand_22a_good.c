#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(int VAR5);
static void FUN2()
{
 int VAR5;
 VAR5 = -1;
 VAR5 = FUN3();
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN4(int VAR5);
static void FUN5()
{
 int VAR5;
 VAR5 = -1;
 VAR5 = FUN3();
 VAR3 = 1;
 FUN4(VAR5);
}
void FUN6(int VAR5);
static void FUN7()
{
 int VAR5;
 VAR5 = -1;
 VAR5 = 7;
 VAR4 = 1;
 FUN6(VAR5);
}
void FUN8()
{
 FUN2();
 FUN5();
 FUN7();
}
#endif
