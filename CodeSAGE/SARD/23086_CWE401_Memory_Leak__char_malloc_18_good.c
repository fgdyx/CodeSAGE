#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = (char *)malloc(100*sizeof(char));
 strcpy(VAR2, "");
 FUN2(VAR2);
 goto VAR4;
VAR4:
 free(VAR2);
}
static void FUN3()
{
 char * VAR2;
 VAR2 = NULL;
 goto VAR3;
VAR3:
 VAR2 = (char *)FUN4(100*sizeof(char));
 strcpy(VAR2, "");
 FUN2(VAR2);
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
