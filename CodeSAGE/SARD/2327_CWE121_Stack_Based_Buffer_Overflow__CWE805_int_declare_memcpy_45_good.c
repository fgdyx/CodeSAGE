#ifndef VAR1
static void FUN1()
{
 int * VAR2 = VAR3;
 {
 int VAR4[100] = {0};
 memcpy(VAR2, VAR4, 100*sizeof(int));
 FUN2(VAR2[0]);
 }
}
static void FUN3()
{
 int * VAR2;
 int VAR5[50];
 int VAR6[100];
 VAR2 = VAR6;
 VAR3 = VAR2;
 FUN1();
}
void FUN4()
{
 FUN3();
}
#endif
