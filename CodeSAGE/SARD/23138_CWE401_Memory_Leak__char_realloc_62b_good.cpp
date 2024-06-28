#ifndef VAR1
void FUN1(char * &VAR2)
{
 VAR2 = (char *)FUN2(100*sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
}
void FUN4(char * &VAR2)
{
 VAR2 = (char *)realloc(VAR2, 100*sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
}
#endif
