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
 int * VAR7 = (int *)FUN4(50*sizeof(int));
 int * VAR8 = (int *)FUN4(100*sizeof(int));
 VAR2 = VAR8;
 FUN5(VAR2);
}
void FUN6()
{
 FUN3();
}
#endif
