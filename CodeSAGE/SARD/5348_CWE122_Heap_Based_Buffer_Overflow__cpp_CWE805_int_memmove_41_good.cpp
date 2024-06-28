#ifndef VAR1
void FUN1(int * VAR2)
{
 {
 int VAR3[100] = {0};
 memmove(VAR2, VAR3, 100*sizeof(int));
 FUN2(VAR2[0]);
 delete [] VAR2;
 }
}
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int[100];
 FUN1(VAR2);
}
void FUN4()
{
 FUN3();
}
#endif
