#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 size_t VAR3;
 VAR3 = 0;
 VAR3 = 20;
 FUN1(&VAR3);
}
void FUN3(void * VAR2);
static void FUN4()
{
 size_t VAR3;
 VAR3 = 0;
 VAR3 = rand();
 FUN3(&VAR3);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
