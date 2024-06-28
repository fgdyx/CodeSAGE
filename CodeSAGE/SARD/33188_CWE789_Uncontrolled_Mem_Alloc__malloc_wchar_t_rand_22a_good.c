#ifndef VAR1
int VAR2 = 0;
int VAR3 = 0;
int VAR4 = 0;
void FUN1(size_t VAR5);
static void FUN2()
{
 size_t VAR5;
 VAR5 = 0;
 VAR5 = rand();
 VAR2 = 0;
 FUN1(VAR5);
}
void FUN3(size_t VAR5);
static void FUN4()
{
 size_t VAR5;
 VAR5 = 0;
 VAR5 = rand();
 VAR3 = 1;
 FUN3(VAR5);
}
void FUN5(size_t VAR5);
static void FUN6()
{
 size_t VAR5;
 VAR5 = 0;
 VAR5 = 20;
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
