#ifndef VAR1
void FUN1(VAR2 * VAR3);
static void FUN2()
{
 VAR2 * VAR3;
 int64_t VAR4[50];
 int64_t VAR5[100];
 VAR3 = VAR5;
 FUN1(VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
