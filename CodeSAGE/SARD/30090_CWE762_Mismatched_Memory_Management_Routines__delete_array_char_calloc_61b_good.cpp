#ifndef VAR1
char * FUN1(char * VAR2)
{
 VAR2 = new char[100];
 return VAR2;
}
char * FUN2(char * VAR2)
{
 VAR2 = (char *)calloc(100, sizeof(char));
 return VAR2;
}
#endif
