#ifndef VAR1
void FUN1(structType VAR2);
static void FUN2()
{
 long * VAR3;
 structType VAR2;
 VAR3 = NULL;
 {
 long * VAR4 = new long[100];
 {
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 100; VAR5++)
 {
 VAR4[VAR5] = 5L;
 }
 }
 VAR3 = VAR4;
 }
 VAR2.VAR6 = VAR3;
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
