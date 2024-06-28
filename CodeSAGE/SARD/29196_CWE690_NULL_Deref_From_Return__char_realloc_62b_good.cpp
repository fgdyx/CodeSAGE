#ifndef VAR1
void FUN1(char * &VAR2)
{
 VAR2 = (char *)realloc(VAR2, 20*sizeof(char));
}
#endif
