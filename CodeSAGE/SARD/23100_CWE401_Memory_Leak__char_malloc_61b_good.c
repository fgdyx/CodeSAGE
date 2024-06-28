#ifndef VAR1
char * FUN1(char * VAR2)
{
 VAR2 = (char *)FUN2(100*sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 return VAR2;
}
char * FUN4(char * VAR2)
{
 VAR2 = (char *)malloc(100*sizeof(char));
 strcpy(VAR2, "");
 FUN3(VAR2);
 return VAR2;
}
#endif
