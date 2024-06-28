#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 while(1)
 {
 VAR2 = (int *)FUN2(10*sizeof(int));
 break;
 }
 {
 int VAR3[10] = {0};
 size_t VAR4;
 for (VAR4 = 0; VAR4 < 10; VAR4++)
 {
 VAR2[VAR4] = VAR3[VAR4];
 }
 FUN3(VAR2[0]);
 }
}
void FUN4()
{
 FUN1();
}
#endif
