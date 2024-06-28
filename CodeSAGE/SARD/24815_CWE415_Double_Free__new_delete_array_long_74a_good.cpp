#ifndef VAR1
void FUN1(VAR2<int, long *> VAR3);
static void FUN2()
{
 long * VAR4;
 VAR2<int, long *> VAR3;
 VAR4 = NULL;
 VAR4 = new long[100];
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN3(VAR2<int, long *> VAR3);
static void FUN4()
{
 long * VAR4;
 VAR2<int, long *> VAR3;
 VAR4 = NULL;
 VAR4 = new long[100];
 delete [] VAR4;
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN3(VAR3);
}
void FUN5()
{
 FUN2();
 FUN4();
}
#endif
