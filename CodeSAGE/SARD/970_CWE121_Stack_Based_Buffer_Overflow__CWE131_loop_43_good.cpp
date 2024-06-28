#ifndef VAR1
static void FUN1(int * &VAR2)
{
 VAR2 = (int *)FUN2(10*sizeof(int));
}
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 int VAR3[10] = {0};
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 10; VAR4++)
 {
 VAR2[VAR4] = VAR3[VAR4];
 }
 FUN4(VAR2[0]);
 }
}
void FUN5()
{
 FUN3();
}
#endif
