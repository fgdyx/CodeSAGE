#ifndef VAR1
void FUN1(void * VAR2)
{
 char * VAR3 = (char *)VAR2;
 char VAR4 = (*VAR3);
 {
 char VAR5 = VAR4 - 1;
 FUN2(VAR5);
 }
}
void FUN3(void * VAR2)
{
 char * VAR3 = (char *)VAR2;
 char VAR4 = (*VAR3);
 if (VAR4 > VAR6)
 {
 char VAR5 = VAR4 - 1;
 FUN2(VAR5);
 }
 else
 {
 FUN4("");
 }
}
#endif
