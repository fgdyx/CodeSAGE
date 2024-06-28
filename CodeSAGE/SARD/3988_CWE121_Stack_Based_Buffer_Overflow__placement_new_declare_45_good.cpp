#ifndef VAR1
static void FUN1()
{
 char * VAR2 = VAR3;
 {
 VAR4 * VAR5 = new(VAR2) VAR4;
 VAR5->VAR6 = 5;
 classTwo->intTwo = 10;
 VAR5->VAR7 = 10;
 FUN2(VAR5->VAR6);
 }
}
static void FUN3()
{
 char * VAR2;
 char VAR8[sizeof(VAR9)];
 char VAR10[sizeof(VAR4)];
 VAR2 = VAR10;
 VAR3 = VAR2;
 FUN1();
}
static void FUN4()
{
 char * VAR2 = VAR11;
 {
 VAR9 * VAR12 = new(VAR2) VAR9;
 VAR12->VAR6 = 5;
 FUN2(VAR12->VAR6);
 }
}
static void FUN5()
{
 char * VAR2;
 char VAR8[sizeof(VAR9)];
 char VAR10[sizeof(VAR4)];
 VAR2 = VAR8;
 VAR11 = VAR2;
 FUN4();
}
void FUN6()
{
 FUN3();
 FUN5();
}
#endif
