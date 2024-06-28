#ifndef VAR1
static int * FUN1(int * VAR2)
{
 VAR2 = new int[100];
 return VAR2;
}
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = FUN1(VAR2);
 {
 int VAR3[100] = {0};
 memcpy(VAR2, VAR3, 100*sizeof(int));
 FUN3(VAR2[0]);
 delete [] VAR2;
 }
}
void FUN4()
{
 FUN2();
}
#endif
