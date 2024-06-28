#ifndef VAR1
void FUN1(char * &VAR2)
{
 VAR2 = (char *)malloc(100*sizeof(char));
}
void FUN2(char * &VAR2)
{
 VAR2 = new char[100];
}
#endif
