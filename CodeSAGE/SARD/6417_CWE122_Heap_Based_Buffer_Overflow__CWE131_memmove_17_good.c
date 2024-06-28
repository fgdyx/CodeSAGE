#ifndef VAR1
static void FUN1()
{
 int VAR2;
 int * VAR3;
 VAR3 = NULL;
 for(VAR2 = 0; VAR2 < 1; VAR2++)
 {
 VAR3 = (int *)malloc(10*sizeof(int));
 }
 {
 int VAR4[10] = {0};
 memmove(VAR3, VAR4, 10*sizeof(int));
 FUN2(VAR3[0]);
 free(VAR3);
 }
}
void FUN3()
{
 FUN1();
}
#endif
