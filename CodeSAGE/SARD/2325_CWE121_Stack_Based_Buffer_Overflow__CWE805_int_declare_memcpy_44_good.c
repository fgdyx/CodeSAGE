#ifndef VAR1
static void FUN1(int * VAR2)
{
 {
 int VAR3[100] = {0};
 memcpy(VAR2, VAR3, 100*sizeof(int));
 FUN2(VAR2[0]);
 }
}
static void FUN3()
{
 int * VAR2;
 void (*VAR4) (int *) = VAR5;
 int VAR6[50];
 int VAR7[100];
 VAR2 = VAR7;
 FUN4(VAR2);
}
void FUN5()
{
 FUN3();
}
#endif
