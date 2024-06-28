#ifndef VAR1
void FUN1(void * VAR2)
{
 char * * VAR3 = (char * *)VAR2;
 char * VAR4 = (*VAR3);
 {
 char VAR5[100] = "";
 /* POTENTIAL FLAW: Do not specify the format allowing a possible format string vulnerability */
 FUN2(VAR5, 100-1, VAR4);
 FUN3(VAR5);
 }
}
#endif
