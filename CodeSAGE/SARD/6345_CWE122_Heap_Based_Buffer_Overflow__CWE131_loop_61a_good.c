#ifndef VAR1
int * FUN1(int * VAR2);
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 {
 int VAR3[10] = {0};
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 10; VAR4++)
 {
 VAR2[VAR4] = VAR3[VAR4];
 }
 FUN3(VAR2[0]);
 free(VAR2);
 }
}
void FUN4()
{
 FUN2();
}
#endif
