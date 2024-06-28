#ifndef VAR1
void FUN1(long * * VAR2);
static void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 {
 long * VAR3 = new long;
 *VAR3 = 5L;
 VAR2 = VAR3;
 }
 FUN1(&VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
