#ifndef VAR1
void FUN1(char * VAR2[]);
static void FUN2()
{
 char * VAR3;
 char * VAR2[5];
 VAR3 = NULL;
 VAR3 = (char *)FUN3(100*sizeof(char));
 strcpy(VAR3, "");
 FUN4(VAR3);
 VAR2[2] = VAR3;
 FUN1(VAR2);
}
void FUN5(char * VAR2[]);
static void FUN6()
{
 char * VAR3;
 char * VAR2[5];
 VAR3 = NULL;
 VAR3 = (char *)malloc(100*sizeof(char));
 strcpy(VAR3, "");
 FUN4(VAR3);
 VAR2[2] = VAR3;
 FUN5(VAR2);
}
void FUN7()
{
 FUN2();
 FUN6();
}
#endif
