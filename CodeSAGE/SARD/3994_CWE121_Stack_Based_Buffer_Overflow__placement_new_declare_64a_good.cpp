#ifndef VAR1
void FUN1(void * VAR2);
static void FUN2()
{
 char * VAR3;
 char VAR4[sizeof(VAR5)];
 char VAR6[sizeof(VAR7)];
 VAR3 = VAR6;
 FUN1(&VAR3);
}
void FUN3(void * VAR2);
static void FUN4()
{
 char * VAR3;
 char VAR4[sizeof(VAR5)];
 char VAR6[sizeof(VAR7)];
 VAR3 = VAR4;
 FUN3(&VAR3);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
