#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = new int[100];
 goto VAR4;
VAR4:
 delete [] VAR2;
}
static void FUN2()
{
 int * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = (int *)malloc(100*sizeof(int));
 goto VAR4;
VAR4:
 free(VAR2);
}
void FUN3()
{
 FUN1();
 FUN2();
}
#endif
