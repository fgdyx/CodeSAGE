#ifndef VAR1
void FUN1(VAR2<int, long *> VAR3);
static void FUN2()
{
 long * VAR4;
 VAR2<int, long *> VAR3;
 VAR4 = NULL;
 {
 long * VAR5 = new long[100];
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6] = 5L;
 }
 }
 VAR4 = VAR5;
 }
 VAR3[0] = VAR4;
 VAR3[1] = VAR4;
 VAR3[2] = VAR4;
 FUN1(VAR3);
}
void FUN3()
{
 FUN2();
}
#endif
