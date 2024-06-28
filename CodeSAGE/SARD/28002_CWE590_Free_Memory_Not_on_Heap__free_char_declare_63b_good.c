#ifndef VAR1
void FUN1(char * * VAR2)
{
 char * VAR3 = *VAR2;
 FUN2(VAR3);
 free(VAR3);
}
#endif
