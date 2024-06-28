#ifndef VAR1
char * FUN1(char * VAR2)
{
 /* FLAW: the full path is not specified */
 strcpy(VAR2, VAR3);
 return VAR2;
}
#endif
