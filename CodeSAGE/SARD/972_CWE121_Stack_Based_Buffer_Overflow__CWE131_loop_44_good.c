#ifndef VAR1
static void FUN1(int * VAR2)
{
 {
 int VAR3[10] = {0};
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 10; VAR4++)
 {
 VAR2[VAR4] = VAR3[VAR4];
 }
 FUN2(VAR2[0]);
 }
}
static void FUN3()
{
 int * VAR2;
 void (*VAR5) (int *) = VAR6;
 VAR2 = NULL;
 VAR2 = (int *)FUN4(10*sizeof(int));
 FUN5(VAR2);
}
void FUN6()
{
 FUN3();
}
#endif
