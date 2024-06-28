#ifndef VAR1
void FUN1(int * VAR2);
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 {
 int * VAR3 = new int[100];
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR3[VAR4] = 5;
 }
 }
 VAR2 = VAR3;
 }
 FUN1(VAR2);
}
void FUN3()
{
 FUN2();
}
#endif
