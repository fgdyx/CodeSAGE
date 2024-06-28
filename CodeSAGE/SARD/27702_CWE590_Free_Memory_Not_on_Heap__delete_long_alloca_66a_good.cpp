#ifndef VAR1
void FUN1(long * VAR2[]);
static void FUN2()
{
 long * VAR3;
 long * VAR2[5];
 VAR3 = NULL;
 {
 long * VAR4 = new long;
 *VAR4 = 5L;
 VAR3 = VAR4;
 }
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
