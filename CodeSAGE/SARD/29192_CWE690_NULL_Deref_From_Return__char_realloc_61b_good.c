#ifndef VAR1
char * FUN1(char * VAR2)
{
 VAR2 = (char *)realloc(VAR2, 20*sizeof(char));
 return VAR2;
}
#endif
