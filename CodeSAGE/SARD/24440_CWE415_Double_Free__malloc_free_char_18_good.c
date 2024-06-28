#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = (char *)malloc(100*sizeof(char));
 free(VAR2);
 goto VAR4;
VAR4:
 ;
}
static void FUN2()
{
 char * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = (char *)malloc(100*sizeof(char));
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
