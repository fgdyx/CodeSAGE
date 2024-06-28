#ifndef VAR1
void FUN1(long * VAR2);
static void FUN2()
{
 long * VAR2;
 void (*VAR3) (long *) = VAR4;
 VAR2 = NULL;
 {
 long * VAR5 = new long[100];
 {
 size_t VAR6;
 for (VAR6 = 0; VAR6 < 100; VAR6++)
 {
 VAR5[VAR6] = 5L;
 }
 }
 VAR2 = VAR5;
 }
 FUN3(VAR2);
}
void FUN4()
{
 FUN2();
}
#endif
