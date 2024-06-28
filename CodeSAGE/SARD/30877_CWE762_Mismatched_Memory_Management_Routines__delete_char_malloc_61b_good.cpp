#ifndef VAR1
char * FUN1(char * VAR2)
{
 VAR2 = new char;
 return VAR2;
}
char * FUN2(char * VAR2)
{
 VAR2 = (char *)malloc(100*sizeof(char));
 return VAR2;
}
#endif
