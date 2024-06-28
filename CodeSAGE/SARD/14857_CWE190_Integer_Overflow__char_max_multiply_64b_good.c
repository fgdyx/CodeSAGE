#ifndef VAR1
void FUN1(void * VAR2)
{
 char * VAR3 = (char *)VAR2;
 char VAR4 = (*VAR3);
 if(VAR4 > 0)
 {
 char VAR5 = VAR4 * 2;
 FUN2(VAR5);
 }
}
void FUN3(void * VAR2)
{
 char * VAR3 = (char *)VAR2;
 char VAR4 = (*VAR3);
 if(VAR4 > 0)
 {
 if (VAR4 < (VAR6/2))
 {
 char VAR5 = VAR4 * 2;
 FUN2(VAR5);
 }
 else
 {
 FUN4("");
 }
 }
}
#endif
