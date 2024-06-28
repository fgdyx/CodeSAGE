#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = (int *)FUN2(10*sizeof(int));
 }
 {
 int VAR4[10] = {0};
 size_t VAR5;
 for (VAR5 = 0; VAR5 < 10; VAR5++)
 {
 VAR3[VAR5] = VAR4[VAR5];
 }
 FUN3(VAR3[0]);
 }
}
void FUN4()
{
 FUN1();
}
#endif
