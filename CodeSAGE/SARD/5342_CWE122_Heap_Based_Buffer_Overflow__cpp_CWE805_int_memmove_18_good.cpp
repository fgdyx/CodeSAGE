#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = new int[100];
 {
 int VAR3[100] = {0};
 memmove(VAR2, VAR3, 100*sizeof(int));
 FUN2(VAR2[0]);
 delete [] VAR2;
 }
}
void FUN3()
{
 FUN1();
}
#endif
