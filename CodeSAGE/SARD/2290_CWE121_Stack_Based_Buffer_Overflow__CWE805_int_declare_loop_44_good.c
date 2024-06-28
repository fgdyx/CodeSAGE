#ifndef VAR1
static void FUN1(int * VAR2)
{
 {
 int VAR3[100] = {0};
 {
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 100; VAR4++)
 {
 VAR2[VAR4] = VAR3[VAR4];
 }
 FUN2(VAR2[0]);
 }
 }
}
static void FUN3()
{
 int * VAR2;
 void (*VAR5) (int *) = VAR6;
 int VAR7[50];
 int VAR8[100];
 VAR2 = VAR8;
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
