#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 VAR3 * VAR4;
 int64_t VAR5[50];
 int64_t VAR6[100];
 VAR4 = VAR6;
 FUN1(&VAR4);
}
void FUN3()
{
 FUN2();
}
#endif
