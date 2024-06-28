#ifndef VAR1
void FUN1();
static void FUN2()
{
 long * VAR2;
 VAR2 = NULL;
 {
 long * VAR3 = new long[100];
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5L;
 }
 }
 VAR2 = VAR3;
 }
 VAR5 = VAR2;
 FUN1();
}
void FUN3()
{
 FUN2();
}
#endif
