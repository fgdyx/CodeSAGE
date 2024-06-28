#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = (int *)malloc(10*sizeof(int));
 {
 int VAR3[10] = {0};
 memcpy(VAR2, VAR3, 10*sizeof(int));
 FUN2(VAR2[0]);
 free(VAR2);
 }
}
void FUN3()
{
 FUN1();
}
#endif
