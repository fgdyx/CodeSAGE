#ifndef VAR1
static void FUN1()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)FUN2(100*sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 VAR3* VAR4 = new VAR5;
 VAR4->FUN4(VAR2);
 delete VAR4;
}
static void FUN5()
{
 char * VAR2;
 VAR2 = NULL;
 VAR2 = (char *)calloc(100, sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 VAR3* VAR4 = new VAR6;
 VAR4->FUN4(VAR2);
 delete VAR4;
}
void FUN6()
{
 FUN1();
 FUN5();
}
#endif
