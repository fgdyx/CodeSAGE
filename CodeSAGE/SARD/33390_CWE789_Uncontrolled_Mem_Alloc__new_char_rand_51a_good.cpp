#ifndef VAR1
void FUN1(size_t VAR2);
void FUN2(size_t VAR2);
static void FUN3()
{
 size_t VAR2;
 VAR2 = 0;
 VAR2 = 20;
 FUN1(VAR2);
}
static void FUN4()
{
 size_t VAR2;
 VAR2 = 0;
 VAR2 = rand();
 FUN2(VAR2);
}
void FUN5()
{
 FUN3();
 FUN4();
}
#endif
