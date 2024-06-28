#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 if(FUN2())
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 }
 else
 {
 VAR2 = (int *)malloc(100*sizeof(int));
 }
 {
 int VAR3[100] = {0};
 memcpy(VAR2, VAR3, 100*sizeof(int));
 FUN3(VAR2[0]);
 free(VAR2);
 }
}
void FUN4()
{
 FUN1();
}
#endif
