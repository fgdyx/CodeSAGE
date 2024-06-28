#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 VAR2 = new int[100];
 {
 int * VAR3 = VAR2;
 int * VAR2 = VAR3;
 {
 int VAR4[100] = {0};
 memmove(VAR2, VAR4, 100*sizeof(int));
 FUN2(VAR2[0]);
 delete [] VAR2;
 }
 }
}
void FUN3()
{
 FUN1();
}
#endif
