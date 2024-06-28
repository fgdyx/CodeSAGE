#ifndef VAR1
void FUN1(char * VAR2[])
{
 char * VAR3 = VAR2[2];
 FUN2(VAR3);
}
void FUN3(char * VAR2[])
{
 char * VAR3 = VAR2[2];
 FUN2("", VAR3);
}
#endif
