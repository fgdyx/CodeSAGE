#ifndef VAR1
void FUN1(size_t VAR2);
static void FUN2()
{
 size_t VAR2;
 void (*VAR3) (VAR4) = VAR5;
 VAR2 = 0;
 VAR2 = 20;
 FUN3(VAR2);
}
void FUN4(size_t VAR2);
static void FUN5()
{
 size_t VAR2;
 void (*VAR3) (VAR4) = VAR6;
 VAR2 = 0;
 VAR2 = rand();
 FUN3(VAR2);
}
void FUN6()
{
 FUN2();
 FUN5();
}
#endif
