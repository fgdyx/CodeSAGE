#ifndef VAR1
void FUN1(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3[2];
 delete VAR4;
}
void FUN2(VAR2<char *> VAR3)
{
 char * VAR4 = VAR3[2];
 free(VAR4);
}
#endif
