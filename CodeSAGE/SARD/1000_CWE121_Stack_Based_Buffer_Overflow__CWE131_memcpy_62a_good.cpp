#ifndef VAR1
void FUN1(int * &VAR2);
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 FUN1(VAR2);
 {
 int VAR3[10] = {0};
 memcpy(VAR2, VAR3, 10*sizeof(int));
 FUN3(VAR2[0]);
 }
}
void FUN4()
{
 FUN2();
}
#endif
