#ifndef VAR1
static void FUN1()
{
 int * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = (int *)malloc(100*sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 goto VAR4;
VAR4:
 free(VAR2);
}
static void FUN3()
{
 int * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = (int *)FUN4(100*sizeof(int));
 VAR2[0] = 5;
 FUN2(VAR2[0]);
 goto VAR4;
VAR4:
 ;
}
void FUN5()
{
 FUN1();
 FUN3();
}
#endif
